// rea decompile_all
// name: FUN_004b78c0
// address: 0x4b78c0
// body: available
// range: 0x4b78c0-0x4b79a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b78c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  _locale_t unaff_EDI;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  do {
    if (in_ECX[1] == 0) {
      if (((uint)in_ECX[2] < (uint)((int *)*in_ECX)[2]) &&
         (piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4), piVar1 != (int *)0x0)) {
        in_ECX[1] = *piVar1;
        goto LAB_004b78fd;
      }
LAB_004b792f:
      iVar2 = 0;
    }
    else {
LAB_004b78fd:
      iVar2 = FUN_00426f70();
      if (iVar2 == 0) {
        if (((uint)((int *)*in_ECX)[2] <= in_ECX[2] + 1U) ||
           (*(int *)(*(int *)*in_ECX + (in_ECX[2] + 1U) * 4) == 0)) goto LAB_004b792f;
        iVar2 = FUN_00426f70();
      }
    }
    iVar3 = FID_conflict__iswalnum((wint_t)iVar2,unaff_EDI);
    if (((iVar3 == 0) && (iVar2 != 0x5f)) && (iVar2 != 0x40)) {
      if (iVar5 - 2U < 0xf) {
        local_6c[0] = 0;
        FUN_004b5030(local_6c);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar4 = FUN_006f30b0();
    if (iVar5 < 0x14) {
      FUN_0044ecc0(uVar4);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

