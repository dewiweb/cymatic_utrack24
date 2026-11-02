// rea decompile_all
// name: FUN_0042c02f
// address: 0x42c02f
// body: available
// range: 0x42c02f-0x42c112 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c02f(void)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  uint *in_EAX;
  int iVar4;
  int unaff_ESI;
  uint uVar5;
  uint local_8;
  
  uVar3 = *in_EAX;
  local_8 = 1;
  if (uVar3 != 0) {
    do {
      if (*(int *)(unaff_ESI + 0x1c) < 2) {
        if (*(char *)(unaff_ESI + 0x231) != '\0') {
          *(undefined4 *)(unaff_ESI + 0xc) = 0x81;
        }
        *(undefined4 *)(unaff_ESI + 0x1c) = 0;
        break;
      }
      iVar4 = *(int *)(unaff_ESI + 0x1c) + -2;
      *(int *)(unaff_ESI + 0x1c) = iVar4;
      puVar1 = (uint *)(*(int *)(unaff_ESI + 0x18) + iVar4 * 4);
      if ((ushort)puVar1[1] < *(ushort *)(unaff_ESI + 0x2c)) {
        uVar5 = *puVar1 >> 4 & 0xf;
        if (*(char *)(unaff_ESI + 0x170) == 'q') {
          uVar5 = uVar5 + 0x10;
        }
        else if (*(char *)(unaff_ESI + 0x170) == 'r') {
          uVar5 = uVar5 + 0x20;
        }
        sVar2 = *(short *)(unaff_ESI + 0x14c);
        iVar4 = FUN_004298e7();
        if (iVar4 == uVar5 + (int)sVar2) {
          (**(code **)(unaff_ESI + 0x248))();
        }
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      }
      local_8 = local_8 + 1;
    } while (local_8 <= uVar3);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}

