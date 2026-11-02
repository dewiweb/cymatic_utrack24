// rea decompile_all
// name: FUN_005d97f0
// address: 0x5d97f0
// body: available
// range: 0x5d97f0-0x5d99d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d97f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *_Memory;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int in_ECX;
  int in_EDX;
  int iVar6;
  uint *puVar7;
  uint local_8c [33];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar6 = in_EDX;
  if (param_1 != 0) {
    iVar6 = param_1;
  }
  _Memory = (uint *)FUN_004c554b(iVar6 << 2);
  _memset(local_8c,0,0x84);
  iVar6 = 0;
  puVar7 = _Memory;
  if (0 < in_EDX) {
    do {
      iVar1 = *(int *)(in_ECX + iVar6 * 4);
      if (iVar1 < 1) {
        if (param_1 == 0) {
          puVar7 = puVar7 + 1;
        }
      }
      else {
        uVar4 = local_8c[iVar1];
        if ((iVar1 < 0x20) && (uVar4 >> ((byte)iVar1 & 0x1f) != 0)) goto LAB_005d99b6;
        *puVar7 = uVar4;
        puVar7 = puVar7 + 1;
        iVar3 = iVar1;
        do {
          if ((local_8c[iVar3] & 1) != 0) {
            if (iVar3 == 1) {
              local_8c[1] = local_8c[1] + 1;
            }
            else {
              local_8c[iVar3] = local_8c[iVar3 + -1] * 2;
            }
            break;
          }
          local_8c[iVar3] = local_8c[iVar3] + 1;
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        while ((iVar3 = iVar1 + 1, iVar3 < 0x21 && (uVar2 = local_8c[iVar3], uVar2 >> 1 == uVar4)))
        {
          local_8c[iVar3] = local_8c[iVar1] * 2;
          uVar4 = uVar2;
          iVar1 = iVar3;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_EDX);
  }
  if (param_1 != 1) {
    iVar6 = 1;
    do {
      if ((local_8c[iVar6] & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f)) != 0) {
LAB_005d99b6:
        FID_conflict__free(_Memory);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x21);
  }
  iVar6 = 0;
  if (0 < in_EDX) {
    do {
      uVar4 = 0;
      iVar1 = *(int *)(in_ECX + iVar6 * 4);
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          bVar5 = (byte)iVar3;
          iVar3 = iVar3 + 1;
          uVar4 = uVar4 * 2 | *_Memory >> (bVar5 & 0x1f) & 1;
        } while (iVar3 < iVar1);
      }
      if ((param_1 == 0) || (iVar1 != 0)) {
        *_Memory = uVar4;
        _Memory = _Memory + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_EDX);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

