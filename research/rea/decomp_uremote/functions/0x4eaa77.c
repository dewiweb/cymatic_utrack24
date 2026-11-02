// rea decompile_all
// name: FUN_004eaa77
// address: 0x4eaa77
// body: available
// range: 0x4eaa77-0x4eab4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eaa77(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 auStack_18 [20];
  
  puVar1 = (undefined4 *)(in_ECX + 0x108);
  if (*(char *)*puVar1 != '\0') {
    cVar2 = FUN_004c30fb();
    if (cVar2 == '\0') {
      iVar3 = FUN_004ec153();
      if (iVar3 == 0) {
        FUN_004d076d();
        FUN_0047cda7();
        FUN_0047ceaa();
        cVar2 = FUN_004e97e8();
        if (cVar2 == '\0') {
          FUN_0047d02d(param_1,puVar1,*(int *)(in_ECX + 0xe4),0,
                       *(int *)(*(int *)(in_ECX + 0x7c) + 0x18) - *(int *)(in_ECX + 0xe4),
                       *(undefined4 *)(in_ECX + 0x1c));
        }
        else {
          uVar4 = FUN_004c2047(auStack_18);
          FUN_0047cffd(param_1,puVar1,uVar4);
        }
      }
    }
  }
  iVar3 = thunk_FUN_004c1d58();
  (**(code **)(*(int *)(iVar3 + 0xc) + 8))(param_1,*(undefined4 *)(in_ECX + 0x18));
  return;
}

