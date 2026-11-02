// rea decompile_all
// name: FUN_00565fe0
// address: 0x565fe0
// body: available
// range: 0x565fe0-0x566145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00565fe0(void)

{
  int in_ECX;
  int local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x114) == 0) {
    if (in_ECX == *(int *)(*(int *)(in_ECX + 0x88) + 0xc)) {
      *(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xc) = *(undefined4 *)(in_ECX + 0x120);
      *(undefined4 *)(in_ECX + 0x120) = 0;
    }
    else {
      for (local_c = *(int *)(*(int *)(in_ECX + 0x88) + 0xc); local_c != 0;
          local_c = *(int *)(local_c + 0x120)) {
        if (in_ECX == *(int *)(local_c + 0x120)) {
          *(undefined4 *)(local_c + 0x120) = *(undefined4 *)(in_ECX + 0x120);
          *(undefined4 *)(in_ECX + 0x120) = 0;
          return;
        }
      }
    }
  }
  else {
    FUN_005662a0();
    if (in_ECX == *(int *)(*(int *)(in_ECX + 0x114) + 0x11c)) {
      *(undefined4 *)(*(int *)(in_ECX + 0x114) + 0x11c) = *(undefined4 *)(in_ECX + 0x120);
      *(undefined4 *)(in_ECX + 0x120) = 0;
    }
    else {
      for (local_8 = *(int *)(*(int *)(in_ECX + 0x114) + 0x11c); local_8 != 0;
          local_8 = *(int *)(local_8 + 0x120)) {
        if (in_ECX == *(int *)(local_8 + 0x120)) {
          *(undefined4 *)(local_8 + 0x120) = *(undefined4 *)(in_ECX + 0x120);
          *(undefined4 *)(in_ECX + 0x120) = 0;
          break;
        }
      }
    }
    *(undefined4 *)(in_ECX + 0x114) = 0;
  }
  return;
}

