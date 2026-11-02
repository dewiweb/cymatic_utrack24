// rea decompile_all
// name: FUN_005e2820
// address: 0x5e2820
// body: available
// range: 0x5e2820-0x5e2960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e2820(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *in_EDX;
  int local_8;
  
  iVar1 = FUN_005eabc0();
  if ((-1 < iVar1) && (iVar1 <= in_EDX[4] + -8)) {
    iVar2 = FUN_004c5556(iVar1 + 1,1);
    in_ECX[3] = iVar2;
    FUN_005e3030(iVar1);
    iVar1 = FUN_005eabc0();
    if ((-1 < iVar1) &&
       (iVar1 <= (in_EDX[4] - ((int)(in_EDX[1] + 7 + (in_EDX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_EDX
                 >> 2)) {
      in_ECX[2] = iVar1;
      iVar1 = FUN_004c5556(iVar1 + 1,4);
      *in_ECX = iVar1;
      iVar1 = FUN_004c5556(in_ECX[2] + 1,4);
      in_ECX[1] = iVar1;
      local_8 = 0;
      if (0 < in_ECX[2]) {
        do {
          iVar1 = FUN_005eabc0();
          if ((iVar1 < 0) ||
             ((in_EDX[4] - ((int)(in_EDX[1] + 7 + (in_EDX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_EDX <
              iVar1)) goto LAB_005e294e;
          *(int *)(in_ECX[1] + local_8 * 4) = iVar1;
          uVar3 = FUN_004c5556(iVar1 + 1,1);
          *(undefined4 *)(*in_ECX + local_8 * 4) = uVar3;
          FUN_005e3030(iVar1);
          local_8 = local_8 + 1;
        } while (local_8 < in_ECX[2]);
      }
      iVar1 = FUN_005eabc0();
      if (iVar1 == 1) {
        return 0;
      }
    }
  }
LAB_005e294e:
  FUN_005e2cf0();
  return 0xffffff7b;
}

