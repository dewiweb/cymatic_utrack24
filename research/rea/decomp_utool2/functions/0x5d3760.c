// rea decompile_all
// name: FUN_005d3760
// address: 0x5d3760
// body: available
// range: 0x5d3760-0x5d38e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d3760(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  longlong lVar9;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  uVar4 = *(undefined4 *)in_ECX[0xf];
  uVar5 = ((undefined4 *)in_ECX[0xf])[1];
  local_20 = in_ECX[0x72];
  local_1c = local_20;
  local_18 = FUN_005d3e50();
  if (((code *)in_ECX[0xb1] == (code *)0x0) || (in_ECX[0xb3] == 0)) {
    in_ECX[4] = 0xffffffff;
    in_ECX[5] = 0xffffffff;
    in_ECX[2] = 0xffffffff;
    in_ECX[3] = 0xffffffff;
  }
  else {
    (*(code *)in_ECX[0xb1])(*in_ECX,0,0,2);
    iVar7 = (*(code *)in_ECX[0xb3])(*in_ECX);
    in_ECX[4] = iVar7;
    in_ECX[5] = iVar7 >> 0x1f;
    in_ECX[2] = iVar7;
    in_ECX[3] = iVar7 >> 0x1f;
  }
  if ((in_ECX[4] & in_ECX[5]) != 0xffffffff) {
    lVar9 = FUN_005d43d0(*(undefined4 *)(in_ECX[0x10] + 4),&local_20,&local_10);
    uVar8 = (undefined4)lVar9;
    if ((0xffffffff < lVar9) || (-1 < lVar9)) {
      iVar7 = FUN_005d3970(0,0,uVar4,uVar5,in_ECX[2],in_ECX[3],local_10,local_c,in_ECX[0x10] + 8,
                           *(undefined4 *)(in_ECX[0x10] + 4),0);
      if (iVar7 < 0) {
        return 0xffffff80;
      }
      puVar6 = (undefined4 *)in_ECX[0xe];
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)in_ECX[0x10] = local_1c;
      puVar6 = (undefined4 *)in_ECX[0xf];
      *puVar6 = uVar4;
      puVar6[1] = uVar5;
      *(undefined8 *)in_ECX[0x11] = local_18;
      iVar7 = in_ECX[0x11];
      puVar1 = (uint *)(iVar7 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - (uint)local_18;
      piVar2 = (int *)(iVar7 + 0xc);
      *piVar2 = (*piVar2 - local_18._4_4_) - (uint)(uVar3 < (uint)local_18);
      iVar7 = in_ECX[0x11];
      if ((*(int *)(iVar7 + 0xc) < 1) && (*(int *)(iVar7 + 0xc) < 0)) {
        *(undefined4 *)(iVar7 + 8) = 0;
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
      uVar8 = FUN_005d2a30();
    }
    return uVar8;
  }
  return 0xffffff7d;
}

