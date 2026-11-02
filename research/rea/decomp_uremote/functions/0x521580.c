// rea decompile_all
// name: FUN_00521580
// address: 0x521580
// body: available
// range: 0x521580-0x52161a inclusive
// range: 0x52161d-0x5216f9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521580(undefined4 param_1,int param_2,short param_3,short param_4,short param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfd33;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = *(int *)(in_ECX + 0x20);
  while( true ) {
    if (local_14 == 0) {
      local_28 = (undefined4 *)FUN_005af82d(0x2c,uVar2);
      local_8 = 0;
      if (local_28 == (undefined4 *)0x0) {
        local_28 = (undefined4 *)0x0;
      }
      else {
        uVar3 = FUN_0052e6e0();
        *local_28 = CPG::CPListItem<CPCHAI::CWatchersToBeNotified::ToBeNotified>::vftable;
        local_28[1] = 0;
        local_28[2] = 0;
        local_8 = CONCAT31(local_8._1_3_,1);
        *local_28 = CPCHAI::CWatchersToBeNotified::ToBeNotified::vftable;
        local_28[3] = uVar3;
        FUN_00503c60(param_1);
        local_28[8] = param_2;
        *(short *)(local_28 + 9) = param_3;
        *(short *)((int)local_28 + 0x26) = param_4;
        *(short *)(local_28 + 10) = param_5;
      }
      local_8 = 0xffffffff;
      FUN_00517bb0(local_28);
      ExceptionList = local_10;
      return;
    }
    cVar1 = FUN_00503ca0(param_1);
    if ((((cVar1 != '\0') && (*(int *)(local_14 + 0x20) == param_2)) &&
        (*(short *)(local_14 + 0x24) == param_3)) &&
       ((*(short *)(local_14 + 0x26) == param_4 && (*(short *)(local_14 + 0x28) == param_5))))
    break;
    if (local_14 == 0) {
      local_14 = *(int *)(in_ECX + 0x20);
    }
    else {
      local_14 = *(int *)(local_14 + 8);
    }
  }
  ExceptionList = local_10;
  return;
}

