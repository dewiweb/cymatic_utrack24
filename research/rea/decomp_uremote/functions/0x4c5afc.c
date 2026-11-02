// rea decompile_all
// name: FUN_004c5afc
// address: 0x4c5afc
// body: available
// range: 0x4c5afc-0x4c5be5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c5afc(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 uStack_78;
  undefined1 *local_74;
  undefined1 local_48 [68];
  
  if (unaff_EDI != 0) {
    local_74 = (undefined1 *)0x4c5b32;
    cVar1 = FUN_004c044d();
    if (cVar1 == '\0') {
      local_74 = local_48;
      uStack_78 = 0x4c5b9d;
      FUN_004c6c2a();
      local_74 = (undefined1 *)0x4c5ba8;
      FUN_004c6d53();
    }
    else {
      FUN_004c4923(&uStack_78);
      puVar2 = (undefined4 *)FUN_004c0902(0);
      local_74 = (undefined1 *)*puVar2;
      uStack_78 = 0x4c5b6f;
      FUN_004a8e4a();
      local_74 = (undefined1 *)puVar2[1];
      uStack_78 = 0x4c5b7c;
      FUN_004a8e4a();
    }
    if (param_1 == 0) {
      local_74 = (undefined1 *)0x4c5bde;
      FUN_004c0c1f();
    }
    else {
      local_74 = (undefined1 *)0x0;
      uStack_78 = 0;
      FUN_004cf90b(param_1,unaff_EDI,0,0);
    }
  }
  return;
}

