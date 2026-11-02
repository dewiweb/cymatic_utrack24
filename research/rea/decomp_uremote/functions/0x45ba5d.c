// rea decompile_all
// name: FUN_0045ba5d
// address: 0x45ba5d
// body: available
// range: 0x45ba5d-0x45bc01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045ba5d(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  piVar1 = (int *)FUN_00505f80(
                              "2uihWv/JRCwItYfFAZUqzHx1BeVSkYctdhQ4Og5fX+jK5EIn4blT114E0ViW2nw1X5XS6DGOOwoJ1l34Ud6+Bn5pW1y2YXXw9XBet23jmUIbDS7zwYqwmCS19FYsVrw1m/u6Xi+xnXXwwh22Zdh9nW/qti6paf50ojcjSPRGDVh6zZJBtIADi6PE/6Slx75QvlTxm23WynDWhEOtIqjEu+Ou8zUkKj65+kL1imTVfOccNjHkVLfAPLe+FSOHPq2GEQ0QPoGNttqh7lT/iWr9tjU8vhgsuC/Uer4kguBnT6mU44FSsZxUeQAPx9ne/bo/dPISTeUsv8gq6XYziDkF4Q=="
                              );
  *(int **)(unaff_ESI + 0x114) = piVar1;
  (**(code **)(*piVar1 + 0x48))(1);
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x114) + 0xb4))(2,0,1,0,0x6800000,"uTrack24 Remote");
  *(int *)(unaff_ESI + 0x118) = iVar2;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 8) + 4 + iVar2) + 0xb4))("uRemote");
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x118) + 4) + 8) + 4
                                       + *(int *)(unaff_ESI + 0x118)) + 0xe4))
                            (0x4000000,"Status",&DAT_0095c898);
  *(int **)(unaff_ESI + 0x11c) = piVar1;
  iVar2 = unaff_ESI + 0x14;
  (**(code **)(*piVar1 + 0xc))(iVar2);
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x118) + 4) + 8) + 4
                                       + *(int *)(unaff_ESI + 0x118)) + 0xe4))
                            (0x4000000,"Meters",&DAT_0095c898);
  *(int **)(unaff_ESI + 0x120) = piVar1;
  (**(code **)(*piVar1 + 0xc))(iVar2);
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x118) + 4) + 8) + 4
                                       + *(int *)(unaff_ESI + 0x118)) + 0xe4))
                            (0x4000000,"Controllers",&DAT_0095c898);
  *(int **)(unaff_ESI + 0x124) = piVar1;
  (**(code **)(*piVar1 + 0xc))(iVar2);
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x118) + 4) + 8) + 4
                                       + *(int *)(unaff_ESI + 0x118)) + 0xe4))
                            (0x4000000,"Files",&DAT_0095c898);
  *(int **)(unaff_ESI + 0x128) = piVar1;
  (**(code **)(*piVar1 + 0xc))(iVar2);
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x118) + 4) + 8) + 4
                                       + *(int *)(unaff_ESI + 0x118)) + 0xe4))
                            (0x4000000,"Settings",&DAT_0095c898);
  *(int **)(unaff_ESI + 300) = piVar1;
  (**(code **)(*piVar1 + 0xc))(iVar2);
  FUN_0045b048();
  if (unaff_ESI != -0x50) {
    FUN_00472fde();
  }
  (**(code **)(**(int **)(unaff_ESI + 0x114) + 0x40))(unaff_ESI + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0045bbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(unaff_ESI + 0x114) + 0xe0))();
  return;
}

