// rea decompile_all
// name: FUN_005c03e0
// address: 0x5c03e0
// body: available
// range: 0x5c03e0-0x5c0501 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c03e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  int iVar6;
  int local_28 [3];
  LPCRITICAL_SECTION local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a4c8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (LPCRITICAL_SECTION)(in_ECX + 0x30);
  local_18 = in_ECX;
  EnterCriticalSection(local_1c);
  local_8 = 0;
  if (*(int *)(in_ECX + 0xc) < 1) {
    if (*param_1 != 0) {
      FUN_00409ea0(param_1[1],param_1[2]);
    }
  }
  else {
    (**(code **)(*(int *)**(undefined4 **)(in_ECX + 4) + 0xc))(param_1,uVar3);
    if (1 < *(int *)(in_ECX + 0xc)) {
      iVar1 = in_ECX + 0x48;
      iVar6 = *(int *)*param_1;
      iVar4 = 1;
      if (1 < iVar6) {
        iVar4 = iVar6;
      }
      local_14 = iVar1;
      FUN_00403320(iVar4,((int *)*param_1)[1],0,0,0);
      local_28[2] = param_1[2];
      local_28[1] = 0;
      param_1 = (int *)0x1;
      local_28[0] = iVar1;
      if (1 < *(int *)(in_ECX + 0xc)) {
        do {
          (**(code **)(**(int **)(*(int *)(in_ECX + 4) + (int)param_1 * 4) + 0xc))(local_28);
          iVar1 = local_14;
          iVar6 = 0;
          uVar5 = extraout_ECX;
          if (0 < *(int *)*piVar2) {
            do {
              FUN_004258c0(iVar6,piVar2[1],iVar1,iVar6,uVar5,piVar2[2],0x3f800000);
              iVar6 = iVar6 + 1;
              uVar5 = extraout_ECX_00;
            } while (iVar6 < *(int *)*piVar2);
          }
          param_1 = (int *)((int)param_1 + 1);
          in_ECX = local_18;
        } while ((int)param_1 < *(int *)(local_18 + 0xc));
      }
    }
  }
  LeaveCriticalSection(local_1c);
  ExceptionList = local_10;
  return;
}

