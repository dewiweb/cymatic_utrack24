// rea decompile_all
// name: FUN_00656ae0
// address: 0x656ae0
// body: available
// range: 0x656ae0-0x656cc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x656cb7 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x656cc1 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00656ae0(byte param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int in_ECX;
  uint uVar4;
  undefined4 *in_EDX;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  double dVar8;
  uint local_8;
  
  bVar3 = 8 - param_1;
  uVar6 = 1 << (bVar3 & 0x1f);
  if (in_ECX == 0) {
    _Dst = (void *)0x0;
  }
  else {
    if ((uVar6 * 4 == 0) || (_Dst = (void *)FUN_004c554b(), _Dst == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    _memset(_Dst,0,uVar6 * 4);
  }
  uVar5 = 0;
  *in_EDX = _Dst;
  if (uVar6 != 0) {
    do {
      if (in_ECX == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004c554b();
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
      }
      *(int *)((int)_Dst + uVar5 * 4) = iVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  uVar5 = 0;
  local_8 = 0;
  do {
    uVar2 = local_8 * 0x101 & 0xffff;
    uVar4 = uVar2 + 0x80;
    if (uVar2 + 0x7f < 0xfffe) {
      dVar8 = ((double)uVar4 + 0.0) / 65535.0;
      FUN_006f8700();
      fVar7 = (float10)FUN_006f9790(dVar8 * 65535.0 + 0.5);
      uVar4 = (uint)fVar7;
    }
    uVar4 = ((((uVar4 & 0xffff) << (0x10 - param_1 & 0x1f)) - (uVar4 & 0xffff)) + 0x8000) / 0xffff +
            1;
    if (uVar5 < uVar4) {
      uVar2 = uVar5;
      do {
        uVar5 = uVar2 + 1;
        *(short *)(*(int *)((int)_Dst + (0xffU >> (param_1 & 0x1f) & uVar2) * 4) +
                  (uVar2 >> (bVar3 & 0x1f)) * 2) = (short)(local_8 * 0x101);
        uVar2 = uVar5;
      } while (uVar5 < uVar4);
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0xff);
  if (uVar5 < uVar6 << 8) {
    do {
      uVar4 = 0xff >> (param_1 & 0x1f) & uVar5;
      uVar2 = uVar5 >> (bVar3 & 0x1f);
      uVar5 = uVar5 + 1;
      *(undefined2 *)(*(int *)((int)_Dst + uVar4 * 4) + uVar2 * 2) = 0xffff;
    } while (uVar5 < uVar6 << 8);
  }
  return;
}

