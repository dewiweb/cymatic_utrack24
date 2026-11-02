// rea decompile_all
// name: FUN_005ea700
// address: 0x5ea700
// body: available
// range: 0x5ea700-0x5ea882 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ea700(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (int)((ulonglong)((longlong)(int)in_EDX[1] * -0x7f7f7f7f) >> 0x20) + in_EDX[1];
  iVar7 = (iVar5 >> 7) - (iVar5 >> 0x1f);
  iVar5 = in_ECX[3];
  if (iVar5 != 0) {
    piVar1 = in_ECX + 2;
    *piVar1 = *piVar1 - iVar5;
    if (*piVar1 != 0) {
      FUN_004c1df0(*in_ECX,iVar5 + *in_ECX,in_ECX[2]);
    }
    in_ECX[3] = 0;
  }
  if (in_ECX[1] <= in_ECX[2] + in_EDX[1]) {
    iVar5 = in_EDX[1] + 0x400 + in_ECX[1];
    in_ECX[1] = iVar5;
    iVar5 = FUN_004c553b(*in_ECX,iVar5);
    *in_ECX = iVar5;
  }
  if (in_ECX[6] <= in_ECX[7] + iVar7 + 1) {
    iVar5 = in_ECX[6] + 0x20 + iVar7 + 1;
    in_ECX[6] = iVar5;
    iVar5 = FUN_004c553b(in_ECX[4],iVar5 * 4);
    in_ECX[4] = iVar5;
    iVar5 = FUN_004c553b(in_ECX[5],in_ECX[6] << 3);
    in_ECX[5] = iVar5;
  }
  FUN_004c2c30(in_ECX[2] + *in_ECX,*in_EDX,in_EDX[1]);
  in_ECX[2] = in_ECX[2] + in_EDX[1];
  iVar5 = 0;
  if (0 < iVar7) {
    do {
      *(undefined4 *)(in_ECX[4] + (in_ECX[7] + iVar5) * 4) = 0xff;
      iVar4 = in_ECX[5];
      iVar6 = in_ECX[7] + iVar5;
      iVar5 = iVar5 + 1;
      *(int *)(iVar4 + iVar6 * 8) = in_ECX[0x58];
      *(int *)(iVar4 + 4 + iVar6 * 8) = in_ECX[0x59];
    } while (iVar5 < iVar7);
  }
  *(int *)(in_ECX[4] + (in_ECX[7] + iVar5) * 4) = (int)in_EDX[1] % 0xff;
  iVar4 = in_ECX[7];
  iVar6 = in_ECX[5];
  *(undefined4 *)(iVar6 + (iVar4 + iVar5) * 8) = in_EDX[4];
  *(undefined4 *)(iVar6 + 4 + (iVar4 + iVar5) * 8) = in_EDX[5];
  iVar5 = in_ECX[7] + iVar5;
  in_ECX[0x58] = *(int *)(in_ECX[5] + iVar5 * 8);
  in_ECX[0x59] = *(int *)(in_ECX[5] + 4 + iVar5 * 8);
  puVar2 = (uint *)(in_ECX[4] + in_ECX[7] * 4);
  *puVar2 = *puVar2 | 0x100;
  in_ECX[7] = in_ECX[7] + iVar7 + 1;
  puVar2 = (uint *)(in_ECX + 0x56);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + 1;
  in_ECX[0x57] = in_ECX[0x57] + (uint)(0xfffffffe < uVar3);
  if (in_EDX[3] != 0) {
    in_ECX[0x52] = 1;
  }
  return 0;
}

