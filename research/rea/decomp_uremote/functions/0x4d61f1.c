// rea decompile_all
// name: FUN_004d61f1
// address: 0x4d61f1
// body: available
// range: 0x4d61f1-0x4d6305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d61f1(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  undefined1 **local_1c;
  undefined1 *local_10;
  undefined1 *local_c [2];
  
  local_1c = (undefined1 **)0x4d6205;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    return;
  }
  local_1c = (undefined1 **)0x1;
  cVar1 = FUN_004c30fb(param_4);
  if (cVar1 != '\0') {
    local_1c = (undefined1 **)0x4d6220;
    cVar1 = FUN_004e97f3();
    if (cVar1 == '\0') {
      local_10 = (undefined1 *)&local_1c;
      FUN_004c1e29(&local_1c,0x1000206,0);
      FUN_0047cda7();
      local_1c = (undefined1 **)0x2;
      FUN_0047d353(param_1,0,param_2,param_3);
      local_1c = (undefined1 **)0x3f800000;
      FUN_0047cdee();
      local_1c = (undefined1 **)0x3f400000;
      ppuVar3 = &local_10;
      FUN_004c1e29(local_c,0x1000207,0);
      FUN_00476237(ppuVar3);
      uVar2 = 4;
      goto LAB_004d62ea;
    }
  }
  local_c[0] = (undefined1 *)&local_1c;
  FUN_004c1e29(&local_1c,0x1000205,0);
  FUN_0047cda7();
  local_1c = (undefined1 **)0x1;
  FUN_0047d353(param_1,0,param_2,param_3);
  local_1c = (undefined1 **)0x3f800000;
  FUN_0047cdee();
  local_1c = (undefined1 **)0x0;
  FUN_004c1e29(&local_10,0x1000207);
  uVar2 = 3;
LAB_004d62ea:
  local_1c = &local_10;
  FUN_004db985(param_2,param_3 + 2,uVar2,&local_10);
  return;
}

