// rea decompile_all
// name: FUN_0045081e
// address: 0x45081e
// body: available
// range: 0x45081e-0x450945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045081e(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  cVar1 = FUN_00443343();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(in_ECX + 0x19c) + 0x28))(1);
    FUN_004401d8(in_ECX + 0x21d4,1);
    cVar1 = FUN_0045f710();
    if ((cVar1 == '\0') && (cVar1 = FUN_0045f751(), cVar1 == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    FUN_004401d8(in_ECX + 0x2bfc,uVar2);
    cVar1 = FUN_0045f751();
    FUN_004c3170('\x01' - (cVar1 != '\0'));
    cVar1 = FUN_0045f751();
    FUN_004c3170('\x01' - (cVar1 != '\0'));
    return;
  }
  if (*(int *)(in_ECX + 0x60e0) != 0) {
    FUN_0044fcbf();
  }
  FUN_0045a575();
  (**(code **)(*(int *)(in_ECX + 0x19c) + 0x28))(0);
  FUN_004595a0();
  FUN_00458d32();
  FUN_0044bf9f();
  FUN_004401d8(in_ECX + 0x21d4,0);
  FUN_004401d8(in_ECX + 0x2bfc,0);
  FUN_004c3170(0);
  FUN_004c3170(0);
  return;
}

