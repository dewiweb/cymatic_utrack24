// rea decompile_all
// name: FUN_00412393
// address: 0x412393
// body: available
// range: 0x412393-0x41240b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00412393(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  uint local_8;
  
  if ((in_EAX != (int *)0x0) && (in_EAX[3] != 0)) {
    uVar1 = in_EAX[1] + 1 + *in_EAX;
    iVar2 = in_EAX[0xc];
    local_8 = 0;
    if (uVar1 != 0) {
      do {
        iVar5 = *(int *)(in_EAX[3] + local_8 * 4);
        while (iVar5 != 0) {
          iVar3 = *(int *)(iVar5 + 8);
          *(undefined4 *)(iVar5 + 8) = 0;
          FUN_004121b3();
          iVar4 = (*(code *)in_EAX[5])(iVar5);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - iVar4;
          (*(code *)in_EAX[8])(iVar5);
          iVar5 = iVar3;
        }
        *(undefined4 *)(in_EAX[3] + local_8 * 4) = 0;
        local_8 = local_8 + 1;
      } while (local_8 < uVar1);
    }
    FUN_004121c1();
  }
  return;
}

