// rea decompile_all
// name: FUN_00415934
// address: 0x415934
// body: available
// range: 0x415934-0x415a61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415934(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    FUN_00411a5c(*(undefined4 *)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    if ((*(int *)(param_1 + 0x11c) != 0) && (local_8 = 0, 0 < *(int *)(param_1 + 0x118))) {
      param_1 = 0;
      do {
        puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x11c) + param_1);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00411a5c(*puVar2);
          *puVar2 = 0;
          if (*(char *)(puVar2 + 1) != '\0') {
            FUN_00411a5c(puVar2[2]);
            puVar2[2] = 0;
          }
        }
        local_8 = local_8 + 1;
        param_1 = param_1 + 0xc;
      } while (local_8 < *(int *)(iVar1 + 0x118));
    }
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0x11c));
    *(undefined4 *)(iVar1 + 0x11c) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0xc0));
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0x14));
    *(undefined4 *)(iVar1 + 0x14) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)(iVar1 + 0x18) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0x20));
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0xb0));
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar1 + 0xb4));
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    if (*(int *)(iVar1 + 0x68) == iVar1 + 0x84) {
      FUN_0041105d();
      *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0xac);
    }
  }
  return;
}

