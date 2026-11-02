// rea decompile_all
// name: FUN_00564da0
// address: 0x564da0
// body: available
// range: 0x564da0-0x564ec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564da0(void)

{
  int in_ECX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_14 [16];
  
  (*(code *)**(undefined4 **)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 8)))();
  FUN_0054f6b0();
  if (*(int *)(in_ECX + -0x40) != 0) {
    FUN_00568670(local_14);
    puVar4 = local_14;
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
    (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) + 0x178))
              (0x3030,0,0,0,0,0,puVar4);
    FUN_00503c60(local_14);
    FUN_00526ed0(0,0,uVar1,uVar2,uVar3,puVar4);
    FUN_005a0a00(0);
  }
  *(undefined4 *)(in_ECX + -0x40) = 0;
  FUN_0054f6f0();
  (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 8)) + 4))();
  return;
}

