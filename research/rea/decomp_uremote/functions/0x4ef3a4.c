// rea decompile_all
// name: FUN_004ef3a4
// address: 0x4ef3a4
// body: available
// range: 0x4ef3a4-0x4ef431 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef3a4(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  undefined4 uStack_24;
  undefined1 local_18 [20];
  
  iVar3 = thunk_FUN_004c1d58();
  iVar1 = in_ECX[7];
  iVar6 = *(int *)(iVar3 + 0x30);
  uVar4 = (**(code **)(*in_ECX + 0xb8))(local_18);
  (**(code **)(iVar6 + 0xc))(param_1,iVar1,uStack_24,uVar4);
  cVar2 = FUN_004ef4f4();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(iVar3 + 0x30);
    iVar6 = in_ECX[6];
    uVar5 = (**(code **)(*in_ECX + 0xb8))(&stack0xffffffd0);
    (**(code **)(iVar1 + 0x10))(param_1,uVar4,iVar6,uVar5);
  }
  return;
}

