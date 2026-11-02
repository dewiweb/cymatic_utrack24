// rea decompile_all
// name: FUN_004cebff
// address: 0x4cebff
// body: available
// range: 0x4cebff-0x4ced3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004cecec) */
/* WARNING: Removing unreachable block (ram,0x004ced15) */
/* WARNING: Removing unreachable block (ram,0x004ced21) */
/* WARNING: Removing unreachable block (ram,0x004ced38) */
/* WARNING: Removing unreachable block (ram,0x004ced2e) */

uint FUN_004cebff(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  
  pcVar1 = (char *)*unaff_EDI;
  while ((cVar2 = FUN_0046095c(), cVar2 != '\0' || (iVar3 = FUN_00460791(), iVar3 == 0x2c))) {
    FUN_004607e3();
  }
  iVar3 = FUN_00460791();
  cVar2 = FUN_00464f7c();
  if (((cVar2 == '\0') && (iVar3 != 0x2d)) && (iVar3 != 0x2b)) goto LAB_004cec59;
  do {
    FUN_004607e3();
LAB_004cec59:
  } while ((byte)(*pcVar1 - 0x30U) < 10);
  iVar3 = FUN_00460791();
  if (iVar3 == 0x2e) {
    do {
      FUN_004607e3();
    } while ((byte)(*pcVar1 - 0x30U) < 10);
  }
  uVar4 = FUN_00460791();
  if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
    iVar3 = FUN_0046085c();
    uVar4 = FUN_00464f7c();
    if (((char)uVar4 != '\0') || ((iVar3 == 0x2d || (iVar3 == 0x2b)))) {
      iVar3 = 1;
      do {
        FUN_004607e3();
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      while (uVar4 = CONCAT31((int3)((uint)pcVar1 >> 8),*pcVar1 - 0x30U),
            (byte)(*pcVar1 - 0x30U) < 10) {
        FUN_004607e3();
      }
    }
  }
  *unaff_EDI = pcVar1;
  return uVar4 & 0xffffff00;
}

