// rea decompile_all
// name: FUN_00494f00
// address: 0x494f00
// body: available
// range: 0x494f00-0x495134 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00494f00(int param_1)

{
  bool bVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  
  if (in_ECX[1] == 0) {
    if (*in_ECX == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*in_ECX + 8);
    }
    if (iVar3 == 0) goto LAB_00495123;
  }
  in_ECX[8] = in_ECX[8] + param_1;
  dVar6 = (double)in_ECX[8] / (double)in_ECX[9];
  if ((0.0 <= dVar6) && (dVar6 < 1.0)) {
    if (0.5 <= dVar6) {
      dVar9 = *(double *)(in_ECX + 0xc);
      dVar6 = ((*(double *)(in_ECX + 0xe) - dVar9) * (dVar6 - 0.5) + dVar9) * (dVar6 - 0.5) +
              ((dVar9 - *(double *)(in_ECX + 10)) * 0.5 + *(double *)(in_ECX + 10)) * 0.5;
    }
    else {
      dVar6 = ((*(double *)(in_ECX + 0xc) - *(double *)(in_ECX + 10)) * dVar6 +
              *(double *)(in_ECX + 10)) * dVar6;
    }
    dVar9 = *(double *)(in_ECX + 0x10);
    dVar4 = *(double *)(in_ECX + 0x10);
    *(double *)(in_ECX + 0x10) = dVar6;
    dVar6 = (dVar6 - dVar9) / (1.0 - dVar4);
    if (dVar6 < 1.0) {
      bVar1 = false;
      dVar9 = dVar6;
      if ((char)in_ECX[0x1c] != '\0') {
        dVar8 = ((double)in_ECX[2] - *(double *)(in_ECX + 0x12)) * dVar6 +
                *(double *)(in_ECX + 0x12);
        dVar7 = ((double)in_ECX[3] - *(double *)(in_ECX + 0x14)) * dVar6 +
                *(double *)(in_ECX + 0x14);
        *(double *)(in_ECX + 0x12) = dVar8;
        *(double *)(in_ECX + 0x14) = dVar7;
        dVar4 = ((double)(in_ECX[4] + in_ECX[2]) - *(double *)(in_ECX + 0x16)) * dVar6 +
                *(double *)(in_ECX + 0x16);
        *(double *)(in_ECX + 0x16) = dVar4;
        local_10 = SUB84(dVar8 + 6755399441055744.0,0);
        dVar5 = ((double)(in_ECX[5] + in_ECX[3]) - *(double *)(in_ECX + 0x18)) * dVar6 +
                *(double *)(in_ECX + 0x18);
        *(double *)(in_ECX + 0x18) = dVar5;
        local_18 = SUB84(dVar7 + 6755399441055744.0,0);
        local_20 = SUB84((dVar4 - dVar8) + 6755399441055744.0,0);
        local_28 = SUB84((dVar5 - dVar7) + 6755399441055744.0,0);
        cVar2 = FUN_004af950(in_ECX + 2);
        if (cVar2 != '\0') {
          FUN_006e9790(local_10,local_18,local_20,local_28);
          bVar1 = true;
          dVar9 = dVar6;
        }
      }
      if (*(char *)((int)in_ECX + 0x71) != '\0') {
        *(double *)(in_ECX + 0x1a) =
             (*(double *)(in_ECX + 6) - *(double *)(in_ECX + 0x1a)) * dVar9 +
             *(double *)(in_ECX + 0x1a);
        FUN_006e62c0();
        return 1;
      }
      if (bVar1) {
        return 1;
      }
    }
  }
LAB_00495123:
  FUN_00495140();
  return 0;
}

