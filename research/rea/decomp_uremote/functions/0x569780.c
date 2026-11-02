// rea decompile_all
// name: FUN_00569780
// address: 0x569780
// body: available
// range: 0x569780-0x569900 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00569780(undefined4 param_1)

{
  char cVar1;
  undefined1 local_34 [16];
  uint local_24;
  undefined1 local_20 [16];
  uint local_10;
  int *local_c;
  undefined1 local_5;
  
  local_c = (int *)FUN_0056a330();
  local_5 = 0;
  do {
    if (local_c == (int *)0x0) {
      return local_5;
    }
    FUN_00567dc0();
    for (local_10 = 0; local_10 < *(ushort *)(local_c + 0x16); local_10 = local_10 + 1) {
      FUN_00559900(local_20,local_10);
      cVar1 = FUN_005039c0();
      if (cVar1 == '\0') {
        cVar1 = FUN_005034a0(local_20);
        if (cVar1 != '\0') goto LAB_0056982b;
        cVar1 = FUN_005039a0();
        if (cVar1 != '\0') {
          cVar1 = FUN_00503830(local_20,param_1);
          if (cVar1 != '\0') goto LAB_0056982b;
        }
      }
      else {
LAB_0056982b:
        (**(code **)(*local_c + 0x18))(0,local_20);
        local_5 = 1;
      }
    }
    for (local_24 = 0; local_24 < *(ushort *)(local_c + 0x1b); local_24 = local_24 + 1) {
      FUN_00559900(local_34,local_24);
      cVar1 = FUN_005039c0();
      if (cVar1 == '\0') {
        cVar1 = FUN_005034a0(local_34);
        if (cVar1 != '\0') goto LAB_005698c8;
        cVar1 = FUN_005039a0();
        if (cVar1 != '\0') {
          cVar1 = FUN_00503830(local_34,param_1);
          if (cVar1 != '\0') goto LAB_005698c8;
        }
      }
      else {
LAB_005698c8:
        (**(code **)(*local_c + 0x18))(1,local_34);
        local_5 = 1;
      }
    }
    local_c = (int *)FUN_0056a3e0(local_c);
  } while( true );
}

