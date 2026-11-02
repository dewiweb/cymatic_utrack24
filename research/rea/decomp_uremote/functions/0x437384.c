// rea decompile_all
// name: FUN_00437384
// address: 0x437384
// body: available
// range: 0x437384-0x437427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00437384(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if (in_EAX == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(in_EAX + 0x18) = 0;
    if (*(int *)(in_EAX + 0x20) == 0) {
      *(code **)(in_EAX + 0x20) = thunk_FUN_0043788a;
      *(undefined4 *)(in_EAX + 0x28) = 0;
    }
    if (*(int *)(in_EAX + 0x24) == 0) {
      *(undefined **)(in_EAX + 0x24) = &DAT_004378b9;
    }
    iVar1 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x18);
    *(int *)(in_EAX + 0x1c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 0xc) = 0;
      *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 0xc) = 1;
      *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 0x10) = 0xf;
      uVar2 = FUN_00436a58(~-(uint)(*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 0) & 0x437778);
      *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 0x14) = uVar2;
      if (*(int *)(*(int *)(in_EAX + 0x1c) + 0x14) != 0) {
        FUN_00437312();
        return 0;
      }
      FUN_0043734f();
    }
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

