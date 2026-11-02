// rea decompile_all
// name: FUN_005212e0
// address: 0x5212e0
// body: available
// range: 0x5212e0-0x521327 inclusive
// range: 0x52132a-0x521427 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005212e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_34 [16];
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (100 < (uint)(param_1 - *(int *)(in_ECX + 0x18))) {
    *(int *)(in_ECX + 0x18) = param_1;
    local_c = *(undefined4 **)(in_ECX + 0x20);
    while (local_c != (undefined4 *)0x0) {
      if (local_c == (undefined4 *)0x0) {
        local_8 = *(undefined4 **)(in_ECX + 0x20);
      }
      else {
        local_8 = (undefined4 *)local_c[2];
      }
      if (300 < (uint)(param_1 - local_c[3])) {
        FUN_00521490(local_c + 4,local_c[8],*(undefined2 *)(local_c + 9),
                     *(undefined2 *)((int)local_c + 0x26),*(undefined2 *)(local_c + 10));
        FUN_0054d810(local_c);
        local_24 = local_c;
        local_20 = local_c;
        if (local_c != (undefined4 *)0x0) {
          (**(code **)*local_c)(1);
        }
      }
      local_c = local_8;
    }
  }
  if (2000 < (uint)(param_1 - *(int *)(in_ECX + 0x1c))) {
    *(int *)(in_ECX + 0x1c) = param_1;
    FUN_00503bc0();
    do {
      if (*(short *)(in_ECX + 0x16) == 0) break;
      uVar2 = FUN_0055a250(local_34);
      FUN_00503de0(uVar2);
      cVar1 = FUN_00503fe0();
    } while (cVar1 == '\0');
    FUN_0055a360();
  }
  return;
}

