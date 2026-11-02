// rea decompile_all
// name: FUN_004e12bb
// address: 0x4e12bb
// body: available
// range: 0x4e12bb-0x4e136a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e12bb(int param_1,undefined4 *param_2,int *param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  iVar3 = *(int *)(in_ECX + 0x90);
  if (iVar3 < 1) {
    iVar3 = 7;
  }
  while( true ) {
    *(int *)(in_ECX + 0xc4) = *(int *)(in_ECX + 0xc4) + 1;
    iVar1 = FUN_004e136b(in_EAX);
    if (in_EAX < iVar1) break;
    if (((in_EAX / 2 < iVar1) || (*(int *)(in_ECX + 200) < param_1)) ||
       (iVar3 <= *(int *)(in_ECX + 0xc4))) goto LAB_004e1330;
  }
  uVar2 = FUN_00439b5a(1);
  *(undefined4 *)(in_ECX + 0xc4) = uVar2;
  FUN_004e136b(in_EAX);
LAB_004e1330:
  iVar3 = *(int *)(in_ECX + 200);
  iVar1 = FUN_00440367(iVar3);
  *(bool *)(in_ECX + 0xbd) = iVar1 < iVar3;
  uVar2 = FUN_004e16d2();
  *param_2 = uVar2;
  *param_3 = iVar1 + 4;
  return;
}

