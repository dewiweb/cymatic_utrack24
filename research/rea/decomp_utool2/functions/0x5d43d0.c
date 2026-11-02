// rea decompile_all
// name: FUN_005d43d0
// address: 0x5d43d0
// body: available
// range: 0x5d43d0-0x5d46ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_005d43d0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *in_ECX;
  int *in_EDX;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  longlong lVar10;
  int local_58;
  uint local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  uVar8 = 0xffffffff;
  iVar1 = in_ECX[3];
  uVar2 = in_ECX[2];
  lVar4 = -1;
  uVar7 = 0xffffffff;
  lVar5 = -1;
  local_10 = -1;
  local_c = 0xffffffff;
  local_24 = uVar2;
  local_14 = iVar1;
  do {
    bVar9 = 0xffff < local_24;
    local_24 = local_24 - 0x10000;
    local_14 = local_14 + -1 + (uint)bVar9;
    if ((local_14 < 1) && (local_14 < 0)) {
      local_14 = 0;
      local_24 = 0;
    }
    if (*in_ECX == 0) {
      iVar6 = -0x81;
    }
    else if (((code *)in_ECX[0xb1] == (code *)0x0) ||
            (iVar6 = (*(code *)in_ECX[0xb1])(*in_ECX,local_24,local_14,0), iVar6 == -1)) {
      iVar6 = -0x80;
    }
    else {
      in_ECX[2] = local_24;
      in_ECX[3] = local_14;
      iVar6 = 0;
      in_ECX[8] = 0;
      in_ECX[9] = 0;
      in_ECX[10] = 0;
      in_ECX[0xb] = 0;
      in_ECX[0xc] = 0;
    }
    if (iVar6 != 0) {
      return (longlong)iVar6;
    }
    if ((in_ECX[3] <= iVar1) && ((in_ECX[3] < iVar1 || ((uint)in_ECX[2] < uVar2)))) {
      while( true ) {
        lVar10 = FUN_005d4950(uVar2 - in_ECX[2],
                              (iVar1 - in_ECX[3]) - (uint)(uVar2 < (uint)in_ECX[2]));
        if (lVar10 == -0x80) {
          return -0x80;
        }
        uVar7 = local_c;
        if (lVar10 < 0) break;
        local_10 = *(int *)(local_58 + 0xe);
        uVar7 = *(uint *)(local_58 + 10);
        uVar7 = (((uint)*(byte *)(local_58 + 0xd) << 8 | (uVar7 & 0xffffff) >> 0x10) << 8 |
                (uVar7 & 0xffff) >> 8) << 8 | (uint)*(byte *)(local_58 + 10);
        uVar8 = *(undefined4 *)(local_58 + 6);
        if ((local_10 == *param_2) && (local_10 >> 0x1f == *param_2 >> 0x1f)) {
          *param_3 = uVar8;
          param_3[1] = uVar7;
          lVar5 = lVar10;
        }
        piVar3 = in_EDX;
        iVar6 = param_1;
        if (in_EDX != (int *)0x0) {
          while (iVar6 != 0) {
            if (*piVar3 == local_10) goto LAB_005d462f;
            piVar3 = piVar3 + 1;
            iVar6 = iVar6 + -1;
          }
        }
        lVar5 = -1;
LAB_005d462f:
        local_c = uVar7;
        lVar4 = lVar10;
        if ((iVar1 <= in_ECX[3]) && ((iVar1 < in_ECX[3] || (uVar2 <= (uint)in_ECX[2])))) break;
      }
    }
    if (lVar4 != -1) {
      if (-1 < lVar5) {
        return lVar5;
      }
      *param_2 = local_10;
      *param_3 = uVar8;
      param_3[1] = uVar7;
      return lVar4;
    }
  } while( true );
}

