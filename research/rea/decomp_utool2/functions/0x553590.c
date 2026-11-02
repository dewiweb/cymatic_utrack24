// rea decompile_all
// name: FUN_00553590
// address: 0x553590
// body: available
// range: 0x553590-0x55369e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00553590(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *_Memory;
  int in_ECX;
  char *pcVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00710d52;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = (int)&DAT_00bfe12c;
  local_8 = 0;
  switch(*(undefined4 *)(in_ECX + 0x20)) {
  default:
    goto switchD_005535df_caseD_0;
  case 1:
    pcVar4 = "This item will be fully overwritten.";
    break;
  case 2:
    pcVar4 = "This item will be partially overwritten, no audio file export.";
    break;
  case 3:
    pcVar4 = "This item will be fully copied.";
    break;
  case 4:
    pcVar4 = "This item is not matching the current Export Mode requirements.";
    break;
  case 5:
    pcVar4 = "This item is not matching the current Synched Disk Mode requirements.";
  }
  FUN_0045c990(pcVar4,uVar2);
  iVar1 = *param_1;
  *param_1 = local_14;
  FUN_00637c10();
  local_14 = iVar1;
switchD_005535df_caseD_0:
  if ((*(char *)*param_1 != '\0') && (**(char **)(in_ECX + 0x24) != '\0')) {
    uVar3 = FUN_00637690(in_ECX + 0x24);
    local_8 = 1;
    FUN_00636ec0(uVar3);
    _Memory = (int *)(local_14 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

