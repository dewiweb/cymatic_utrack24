// rea decompile_all
// name: FUN_005d47a0
// address: 0x5d47a0
// body: available
// range: 0x5d47a0-0x5d4944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_005d47a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int *in_ECX;
  undefined4 *in_EDX;
  int extraout_EDX;
  bool bVar6;
  longlong lVar7;
  uint uStack_18;
  int local_10;
  
  lVar4 = -1;
  uVar1 = in_ECX[2];
  iVar2 = in_ECX[3];
  local_10 = iVar2;
  uStack_18 = uVar1;
  do {
    bVar6 = 0xffff < uStack_18;
    uStack_18 = uStack_18 - 0x10000;
    local_10 = local_10 + -1 + (uint)bVar6;
    if ((local_10 < 1) && (local_10 < 0)) {
      local_10 = 0;
      uStack_18 = 0;
    }
    if (*in_ECX == 0) {
      iVar5 = -0x81;
    }
    else if (((code *)in_ECX[0xb1] == (code *)0x0) ||
            (iVar5 = (*(code *)in_ECX[0xb1])(*in_ECX,uStack_18,local_10,0), iVar5 == -1)) {
      iVar5 = -0x80;
    }
    else {
      in_ECX[2] = uStack_18;
      in_ECX[3] = local_10;
      iVar5 = 0;
      in_ECX[8] = 0;
      in_ECX[9] = 0;
      in_ECX[10] = 0;
      in_ECX[0xb] = 0;
      in_ECX[0xc] = 0;
    }
    if (iVar5 != 0) goto LAB_005d493c;
    if (in_ECX[3] <= iVar2) {
      if (in_ECX[3] < iVar2) goto LAB_005d4874;
      uVar3 = in_ECX[2];
      while (uVar3 < uVar1) {
LAB_005d4874:
        do {
          *in_EDX = 0;
          in_EDX[1] = 0;
          in_EDX[2] = 0;
          in_EDX[3] = 0;
          lVar7 = FUN_005d4950(uVar1 - in_ECX[2],
                               (iVar2 - in_ECX[3]) - (uint)(uVar1 < (uint)in_ECX[2]));
          if (lVar7 == -0x80) {
            return -0x80;
          }
          if (lVar7 < 0) goto LAB_005d48c3;
          lVar4 = lVar7;
        } while (in_ECX[3] < iVar2);
        if (iVar2 < in_ECX[3]) break;
        uVar3 = in_ECX[2];
      }
    }
LAB_005d48c3:
  } while (lVar4 == -1);
  if (in_EDX[1] == 0) {
    iVar5 = FUN_005d4a10(lVar4);
    if (iVar5 != 0) {
LAB_005d493c:
      return (longlong)iVar5;
    }
    FUN_005d4950(0x10000,0);
    if ((extraout_EDX < 1) && (extraout_EDX < 0)) {
      return -0x81;
    }
  }
  return lVar4;
}

