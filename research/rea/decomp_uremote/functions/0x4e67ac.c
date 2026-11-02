// rea decompile_all
// name: FUN_004e67ac
// address: 0x4e67ac
// body: available
// range: 0x4e67ac-0x4e696c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e67ac(undefined4 param_1)

{
  void **ppvVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  void *extraout_EDX;
  void **local_64;
  int *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  void *local_30 [5];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  void *local_c;
  
  local_c = (void *)0xffffffff;
  puStack_10 = &LAB_005e3ceb;
  local_14 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)&local_4c;
  ExceptionList = &local_14;
  iVar4 = *(int *)(in_ECX + 0x78);
  local_4c = *(int **)(iVar4 + 0x78);
  local_38 = param_1;
  local_3c = 0;
  if (local_4c == (int *)0x0) goto LAB_004e694d;
  cVar3 = FUN_004c3153();
  if (cVar3 == '\0') goto LAB_004e694d;
  cVar3 = FUN_004c6d4a();
  if ((cVar3 != '\0') || (*(char *)(in_ECX + 0x81) != (char)extraout_EDX)) goto LAB_004e694d;
  local_48 = extraout_EDX;
  local_44 = extraout_EDX;
  local_40 = extraout_EDX;
  local_c = extraout_EDX;
  if (*(char *)(iVar4 + 0x9f) == '\0') {
    ppvVar1 = *(void ***)(in_ECX + 0x7c);
    local_64 = (void **)0x4e684f;
    cVar3 = FUN_004e766a();
    if (cVar3 != '\0') goto LAB_004e6875;
    local_34 = (undefined1 *)&local_64;
    local_64 = ppvVar1;
    FUN_00439b5a(ppvVar1);
    FUN_004a665f();
  }
  else {
LAB_004e6875:
    local_64 = (void **)0x4e6881;
    FUN_004e746a();
    local_c._0_1_ = 1;
    FUN_004e6a17();
    local_c = (void *)((uint)local_c._1_3_ << 8);
    local_64 = (void **)0x4e689d;
    _free(local_30[0]);
  }
  iVar4 = FUN_004f67db();
  if (0 < iVar4) {
    local_64 = local_30;
    (**(code **)(*local_4c + 0x2c))();
    local_14 = (void *)CONCAT31(local_14._1_3_,2);
    cVar3 = FUN_00461733();
    if (cVar3 == '\0') {
      cVar3 = FUN_0047cda0();
      if (cVar3 != '\0') {
        local_64 = (void **)0x4e68ef;
        puVar5 = (undefined4 *)FUN_00461769();
        local_3c = 1;
        if (*(char *)*puVar5 == '\0') goto LAB_004e6902;
      }
      bVar2 = true;
    }
    else {
LAB_004e6902:
      bVar2 = false;
    }
    if ((local_3c & 1) != 0) {
      FUN_004652d6();
    }
    if (bVar2) {
      local_64 = &local_48;
      *(undefined1 *)(in_ECX + 0x81) = 1;
      FUN_004e7c31(local_38);
    }
    FUN_004615f7();
  }
  local_c = (void *)0xffffffff;
  local_64 = (void **)0x4e694c;
  _free(local_48);
LAB_004e694d:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_4c);
  return;
}

