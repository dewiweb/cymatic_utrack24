// rea decompile_all
// name: FUN_004416a0
// address: 0x4416a0
// body: available
// range: 0x4416a0-0x441730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004416a0(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(in_EAX + 0x7c) == 0) {
    FUN_00441599();
  }
  else {
    *(int *)(in_EAX + 0x8c) =
         *(int *)(in_EAX + 0x8c) - *(int *)(in_EAX + 0x78) * *(int *)(in_EAX + 0x7c);
    if (*(int *)(in_EAX + 0x8c) < *(int *)(in_EAX + 0x88)) {
      *(int *)(in_EAX + 0x8c) = *(int *)(in_EAX + 0x88);
    }
    *(undefined4 *)(in_EAX + 0x90) = *(undefined4 *)(in_EAX + 0x8c);
    FUN_004c4e62();
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 300;
    uVar2 = 0x3f800000;
    uVar1 = FUN_00441dbd(0x3f800000,300,0,0,0);
    FUN_004cf6e0(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}

