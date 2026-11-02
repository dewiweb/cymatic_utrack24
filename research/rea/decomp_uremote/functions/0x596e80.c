// rea decompile_all
// name: FUN_00596e80
// address: 0x596e80
// body: available
// range: 0x596e80-0x597074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596e80(void)

{
  char cVar1;
  int in_ECX;
  undefined1 local_9;
  int local_8;
  
  local_8 = FUN_0052e6e0();
  if (*(char *)(in_ECX + 0xc5d) == '\0') {
    if (*(int *)(in_ECX + 0xc58) == 1) {
      DAT_0095c948 = 0;
      if (*(char *)(in_ECX + 0xc5f) != '\0') {
        if ((*(char *)(in_ECX + 0xc6c) == '\0') ||
           ((uint)(local_8 - *(int *)(in_ECX + 0xc64)) < 0x3e9)) {
          if ((*(char *)(in_ECX + 0xc6c) == '\0') &&
             (1000 < (uint)(local_8 - *(int *)(in_ECX + 0xc60)))) {
            *(undefined1 *)(in_ECX + 0xc6c) = 1;
            *(int *)(in_ECX + 0xc64) = local_8;
            FUN_00597280(0xa000,0,0,0);
          }
        }
        else {
          *(undefined4 *)(in_ECX + 0xc58) = 0;
          (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(0);
        }
      }
    }
    else if ((*(int *)(in_ECX + 0xc58) == 0) &&
            (*(uint *)(in_ECX + 0xc68) < (uint)(local_8 - *(int *)(in_ECX + 0xc60)))) {
      DAT_0095c948 = DAT_0095c948 + 1;
      if ((10 < DAT_0095c948) &&
         ((*(int *)(in_ECX + 0x108) != 0 &&
          (cVar1 = (**(code **)(**(int **)(in_ECX + 0x108) + 0xc))(), cVar1 != '\0')))) {
        (**(code **)(**(int **)(in_ECX + 0x108) + 4))(1);
      }
      local_9 = *(undefined1 *)(in_ECX + 0xc5f);
      FUN_00597280(0x8000,&local_9,1,0);
    }
  }
  else if (((*(int *)(in_ECX + 0xc58) == 1) && (*(char *)(in_ECX + 0xc5f) != '\0')) &&
          (2000 < (uint)(local_8 - *(int *)(in_ECX + 0xc60)))) {
    *(undefined4 *)(in_ECX + 0xc58) = 2;
    (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(0);
    *(int *)(in_ECX + 0xc60) = local_8;
  }
  return;
}

