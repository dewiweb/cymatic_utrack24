// rea decompile_all
// name: FUN_004b7ba0
// address: 0x4b7ba0
// body: available
// range: 0x4b7ba0-0x4b7c72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004b7ba0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_ECX;
  
  iVar3 = FUN_006f2ff0();
  if (iVar3 == 0x2d) {
    FUN_006f30b0();
  }
  piVar4 = (int *)FUN_006f30b0();
  if (piVar4 == (int *)0x30) {
    piVar4 = (int *)FUN_006f30b0();
    if ((piVar4 == (int *)0x78) || (piVar4 == (int *)0x58)) {
      iVar3 = 0;
      do {
        if (in_ECX[1] == 0) {
          piVar4 = (int *)*in_ECX;
          if (((uint)piVar4[2] <= (uint)in_ECX[2]) ||
             (puVar1 = *(undefined4 **)(*piVar4 + in_ECX[2] * 4), piVar4 = (int *)0x0,
             puVar1 == (undefined4 *)0x0)) goto LAB_004b7c5d;
          in_ECX[1] = *puVar1;
        }
        uVar5 = FUN_00426f70();
        if (uVar5 == 0) {
          piVar4 = (int *)*in_ECX;
          if (((uint)piVar4[2] <= in_ECX[2] + 1) ||
             (iVar2 = *piVar4, piVar4 = (int *)0x0, *(int *)(iVar2 + (in_ECX[2] + 1) * 4) == 0))
          goto LAB_004b7c5d;
          FUN_0044ebd0(0);
          uVar5 = FUN_00426f70();
        }
        if ((((uVar5 < 0x30) || (0x39 < uVar5)) && ((uVar5 < 0x61 || (0x66 < uVar5)))) &&
           (piVar4 = (int *)(uVar5 - 0x41), &DAT_00000005 < piVar4)) goto LAB_004b7c5d;
        iVar3 = iVar3 + 1;
        FUN_006f30b0();
      } while( true );
    }
  }
LAB_004b7bc6:
  return (uint)piVar4 & 0xffffff00;
LAB_004b7c5d:
  if (iVar3 != 0) {
    uVar5 = FUN_004b7e40();
    return uVar5;
  }
  goto LAB_004b7bc6;
}

