// rea decompile_all
// name: FUN_00445690
// address: 0x445690
// body: available
// range: 0x445690-0x4457fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00445690(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  iVar1 = ((int *)in_ECX[1])[2];
  if (param_1 < iVar1) {
    piVar6 = (int *)(*(int *)in_ECX[1] + param_1 * 4);
    do {
      iVar2 = *piVar6;
      if (param_4 == 0x1000) {
        if (param_2 != 0x1000) {
          iVar3 = *in_ECX;
          local_20 = *(undefined4 *)(iVar2 + 8);
          local_24 = param_4;
          local_1c = param_4;
          local_28 = param_3;
          uVar4 = FUN_004479b0(iVar3,&local_28);
          if ((uVar4 < *(uint *)(iVar3 + 0xb4)) &&
             (*(int *)(*(int *)(iVar3 + 0xac) + uVar4 * 4) != 0)) {
            return 1;
          }
        }
      }
      else {
        iVar7 = 0;
        iVar3 = *(int *)(*(int *)(iVar2 + 0x18) + 0x10);
        while( true ) {
          iVar9 = 0;
          iVar8 = iVar3;
          if (0 < iVar3) {
            do {
              iVar5 = FUN_00637390();
              iVar9 = iVar9 + iVar5;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          if (iVar9 <= iVar7) break;
          if (iVar7 != param_2) {
            iVar8 = *in_ECX;
            local_18 = param_3;
            local_10 = *(undefined4 *)(iVar2 + 8);
            local_14 = param_4;
            local_c = iVar7;
            uVar4 = FUN_004479b0(iVar8,&local_18);
            if ((uVar4 < *(uint *)(iVar8 + 0xb4)) &&
               (*(int *)(*(int *)(iVar8 + 0xac) + uVar4 * 4) != 0)) {
              return 1;
            }
          }
          iVar7 = iVar7 + 1;
        }
      }
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 1;
      param_2 = -1;
    } while (param_1 < iVar1);
  }
  return 0;
}

