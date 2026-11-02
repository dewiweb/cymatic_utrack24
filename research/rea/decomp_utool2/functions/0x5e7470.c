// rea decompile_all
// name: FUN_005e7470
// address: 0x5e7470
// body: available
// range: 0x5e7470-0x5e75d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005e7470(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *in_EDX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(in_ECX + 0x28);
  iVar2 = FUN_005eaca0();
  if (iVar2 < 0) {
    uVar7 = 0;
    iVar2 = *(int *)(in_ECX + 8);
  }
  else {
    uVar4 = *(uint *)(*(int *)(in_ECX + 0x20) + iVar2 * 4);
    if (-1 < (int)uVar4) {
      uVar7 = (int)*(char *)(*(int *)(in_ECX + 0x1c) + -1 + uVar4) + in_EDX[1];
      in_EDX[1] = uVar7 & 7;
      iVar6 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
      in_EDX[3] = in_EDX[3] + iVar6;
      *in_EDX = *in_EDX + iVar6;
      return uVar4 - 1;
    }
    uVar7 = (int)uVar4 >> 0xf & 0x7fff;
    iVar2 = *(int *)(in_ECX + 8) - (uVar4 & 0x7fff);
  }
  iVar3 = FUN_005eaca0();
  do {
    if (-1 < iVar3) {
LAB_005e751d:
      uVar4 = FUN_005e75e0();
      iVar3 = iVar2 - uVar7;
      if (1 < iVar3) {
        do {
          uVar5 = iVar3 >> 1;
          uVar1 = (uint)(uVar4 < *(uint *)(*(int *)(in_ECX + 0x14) + (uVar5 + uVar7) * 4));
          iVar2 = iVar2 - (-uVar1 & uVar5);
          uVar7 = uVar7 + (uVar1 - 1 & uVar5);
          iVar3 = iVar2 - uVar7;
        } while (1 < iVar3);
      }
      iVar2 = (int)*(char *)(*(int *)(in_ECX + 0x1c) + uVar7);
      if (iVar2 <= iVar6) {
        uVar4 = in_EDX[1] + iVar2;
        iVar6 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
        in_EDX[3] = in_EDX[3] + iVar6;
        *in_EDX = *in_EDX + iVar6;
        in_EDX[1] = uVar4 & 7;
        return uVar7;
      }
      uVar7 = in_EDX[1] + iVar6;
      in_EDX[1] = uVar7 & 7;
      iVar6 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
      in_EDX[3] = in_EDX[3] + iVar6;
      *in_EDX = *in_EDX + iVar6;
      return 0xffffffff;
    }
    if (iVar6 < 2) {
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      goto LAB_005e751d;
    }
    iVar6 = iVar6 + -1;
    iVar3 = FUN_005eaca0();
  } while( true );
}

