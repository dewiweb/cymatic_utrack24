// rea decompile_all
// name: FUN_00484cf0
// address: 0x484cf0
// body: available
// range: 0x484cf0-0x484dba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484cf0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  piVar4 = (int *)*in_ECX;
  iVar5 = piVar4[2] * 0x10 + *piVar4;
  local_28 = *piVar4;
  if (local_28 != iVar5) {
    do {
      FUN_0044db90(&local_18,in_ECX + 1);
      if ((0 < local_10) && (0 < local_c)) {
        iVar2 = local_c + local_14;
        for (iVar7 = local_14; iVar7 < iVar2; iVar7 = iVar7 + 1) {
          piVar4 = (int *)*param_1;
          iVar3 = *piVar4 + piVar4[2] * iVar7;
          param_1[1] = iVar3;
          iVar1 = piVar4[3];
          piVar4 = (int *)(iVar1 * local_18 + iVar3);
          if (*(char *)((int)param_1 + 0xb) == -1) {
            iVar3 = param_1[2];
            iVar6 = local_10;
            do {
              *piVar4 = iVar3;
              iVar6 = iVar6 + -1;
              piVar4 = (int *)((int)piVar4 + iVar1);
            } while (0 < iVar6);
          }
          else {
            FUN_0048b4d0(piVar4,param_1[2],local_10);
          }
        }
      }
      local_28 = local_28 + 0x10;
    } while (local_28 != iVar5);
  }
  return;
}

