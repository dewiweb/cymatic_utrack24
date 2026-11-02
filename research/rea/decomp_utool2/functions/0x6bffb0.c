// rea decompile_all
// name: FUN_006bffb0
// address: 0x6bffb0
// body: available
// range: 0x6bffb0-0x6c009c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bffb0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007250eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_28 = 0x6bffe5;
  cVar2 = FUN_006bf4b0();
  if (cVar2 == '\0') {
    uStack_28 = 0x6bfff5;
    FUN_006bf540();
    puVar1 = (undefined4 *)*param_3;
    if (puVar1 != (undefined4 *)0x0) {
      *param_3 = 0;
      uStack_28 = 0x6c000a;
      (**(code **)*puVar1)();
    }
    cVar2 = FUN_006bf0a0();
    if (cVar2 == '\0') {
      uStack_28 = 0x6c0075;
      FUN_006bf100();
    }
    else {
      uStack_28 = 0x6c001c;
      operator_new(0x70);
      uStack_28 = param_1;
      local_8 = 0;
      auStack_30[0] = 0x6c002f;
      puVar4 = (undefined4 *)FUN_00491c90();
      local_8 = 0xffffffff;
      puVar1 = (undefined4 *)*param_3;
      if ((puVar1 != puVar4) && (*param_3 = (int)puVar4, puVar1 != (undefined4 *)0x0)) {
        uStack_28 = 0x6c0048;
        (**(code **)*puVar1)();
      }
      param_3 = (int *)*param_3;
      if ((char)param_3[10] == '\0') {
        FUN_0069e630();
        uVar3 = (**(code **)(*param_3 + 8))();
        *(undefined1 *)(param_3 + 10) = uVar3;
      }
      (**(code **)(*param_3 + 0xc))();
    }
    FUN_006e6400(auStack_30);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  return;
}

