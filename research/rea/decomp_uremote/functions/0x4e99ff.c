// rea decompile_all
// name: FUN_004e99ff
// address: 0x4e99ff
// body: available
// range: 0x4e99ff-0x4e9b62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e99ff(undefined4 param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  undefined4 uStack_50;
  int iStack_4c;
  int local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e2cf4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  bVar2 = false;
  iVar4 = thunk_FUN_0046087d();
  iVar5 = FUN_004ec153();
  if (iVar4 == iVar5) {
    iStack_4c = 0x4e9a50;
    FUN_004ebf83();
    bVar2 = true;
    cVar3 = FUN_00465953();
    if (cVar3 == '\0') {
      bVar1 = false;
      goto LAB_004e9a6c;
    }
  }
  bVar1 = true;
LAB_004e9a6c:
  if (bVar2) {
    FUN_004652d6();
  }
  if (bVar1) {
    iStack_4c = 0x4e9a90;
    FUN_00461693();
    local_c = 0;
    iStack_4c = 0x4e9aa3;
    FUN_004718fd();
    local_c = 0xffffffff;
    FUN_004615f7();
    local_30 = *(int *)(unaff_EDI + 0xf8);
    iVar4 = FUN_004ec153();
    FUN_004eb94e();
    iStack_4c = 0;
    FUN_004c1e29(&uStack_50,0x1000201,0);
    FUN_004eb97d(param_1,0,unaff_EDI + 0xf0);
    if (iVar4 <= local_30) {
      cVar3 = FUN_004e97e8();
      if (cVar3 == '\0') {
        local_30 = FUN_004ec153();
      }
    }
    iStack_4c = local_30;
    uStack_50 = 0x4e9b26;
    FUN_004ea237();
    if (param_2 != '\0') {
      FUN_004e9c5e();
    }
    FUN_004e9f79();
    FUN_004ea08f();
    FUN_004727c8();
    iStack_4c = 0x4e9b4f;
    FUN_004c1613();
  }
  ExceptionList = local_14;
  return;
}

