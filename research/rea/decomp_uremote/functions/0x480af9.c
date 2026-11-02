// rea decompile_all
// name: FUN_00480af9
// address: 0x480af9
// body: available
// range: 0x480af9-0x480b72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480af9(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_ESI;
  
  puVar1 = (undefined4 *)(**(code **)unaff_ESI[1])();
  unaff_ESI[0x56] = (int)puVar1;
  *puVar1 = FUN_0048072b;
  iVar2 = unaff_ESI[0x2e];
  if (iVar2 == 0) {
    puVar1[2] = FUN_0048ac53;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        puVar1[1] = FUN_004809ba;
        puVar1[7] = FUN_0048a9d2;
      }
      else {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x30;
        (**(code **)*unaff_ESI)();
      }
      goto LAB_00480b5e;
    }
    puVar1[2] = FUN_0048af4b;
  }
  puVar1[1] = FUN_004808a0;
LAB_00480b5e:
  iVar2 = 4;
  puVar1 = puVar1 + 8;
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

