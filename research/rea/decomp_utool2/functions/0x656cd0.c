// rea decompile_all
// name: FUN_00656cd0
// address: 0x656cd0
// body: available
// range: 0x656cd0-0x656eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x656ea1 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x656eab to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00656cd0(int param_1,int param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int in_ECX;
  undefined4 *in_EDX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  undefined2 uStack_20;
  void *local_10;
  
  cVar2 = (char)param_1;
  bVar6 = 8 - cVar2;
  uVar8 = 1 << (bVar6 & 0x1f);
  uVar3 = (1 << (0x10U - cVar2 & 0x1f)) - 1;
  if (in_ECX == 0) {
    local_10 = (void *)0x0;
  }
  else {
    if ((uVar8 << 2 == 0) || (local_10 = (void *)FUN_004c554b(), local_10 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    _memset(local_10,0,uVar8 << 2);
  }
  uVar7 = 0;
  *in_EDX = local_10;
  if (uVar8 != 0) {
    do {
      if (in_ECX == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_004c554b();
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
      }
      *(int *)((int)local_10 + uVar7 * 4) = iVar10;
      uVar9 = 0;
      if (param_2 - 95000U < 0x2711) {
        do {
          uVar5 = (uVar9 << (bVar6 & 0x1f)) + uVar7;
          if (param_1 != 0) {
            uVar5 = (uVar5 * 0xffff + (1 << (0xfU - cVar2 & 0x1f))) / uVar3;
          }
          *(short *)(iVar10 + uVar9 * 2) = (short)uVar5;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
      }
      else {
        dVar1 = (double)(&DAT_00c24bb0)[-((int)uVar3 >> 0x1f)];
        do {
          iVar4 = (uVar9 << (bVar6 & 0x1f)) + uVar7;
          dVar12 = ((double)iVar4 + (double)(&DAT_00c24bb0)[-(iVar4 >> 0x1f)]) /
                   ((double)(int)uVar3 + dVar1);
          FUN_006f8700();
          fVar11 = (float10)FUN_006f9790(dVar12 * 65535.0 + 0.5);
          uStack_20 = (undefined2)(int)ROUND(fVar11);
          *(undefined2 *)(iVar10 + uVar9 * 2) = uStack_20;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return;
}

