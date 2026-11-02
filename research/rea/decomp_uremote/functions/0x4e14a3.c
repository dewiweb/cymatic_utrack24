// rea decompile_all
// name: FUN_004e14a3
// address: 0x4e14a3
// body: available
// range: 0x4e14a3-0x4e15dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e14a3(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  
  iVar2 = *(int *)(in_ECX + 0xa0) + -1;
  if (-1 < iVar2) {
    piVar6 = (int *)(*(int *)(in_ECX + 0x98) + iVar2 * 4);
    do {
      iVar1 = *piVar6;
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x70) == param_1)) && (0x60 < *(int *)(in_ECX + 0xb8)))
      {
        iVar2 = *(int *)(iVar1 + 0x14);
        if (in_EAX < 1) {
          if ((-1 < iVar2) && (*(int *)(iVar1 + 0x1c) + iVar2 <= *(int *)(in_ECX + 0xb8))) {
            return;
          }
          if (in_EAX < 0) {
            FUN_00439b5a();
            in_EAX = FUN_00470645();
          }
        }
        FUN_004c4e62();
        FUN_004c53da();
        uVar3 = FUN_00440367();
        uVar4 = FUN_00440367();
        *(undefined4 *)(in_ECX + 0xb4) = uVar4;
        *(undefined4 *)(in_ECX + 0xb8) = uVar3;
        iVar1 = *(int *)(in_ECX + 0xb0);
        iVar5 = FUN_00470645();
        *(int *)(in_ECX + 0xcc) = *(int *)(in_ECX + 0xcc) + ((iVar5 - iVar1) - (in_EAX - iVar2));
        *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(in_ECX + 0xac);
        *(int *)(in_ECX + 0xb0) = iVar5;
        FUN_004e16d2();
        return;
      }
      iVar2 = iVar2 + -1;
      piVar6 = piVar6 + -1;
    } while (-1 < iVar2);
  }
  return;
}

