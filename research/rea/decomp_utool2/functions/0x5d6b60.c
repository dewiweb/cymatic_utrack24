// rea decompile_all
// name: FUN_005d6b60
// address: 0x5d6b60
// body: available
// range: 0x5d6b60-0x5d6d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d6b60(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  double in_XMM3_Qa;
  double dVar7;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar3 = (int)in_XMM3_Qa;
  puVar4 = (undefined4 *)((int)*(double *)(param_1 + iVar3 * 8) * 0x1ec + in_EDX);
  puVar5 = (undefined4 *)(iVar1 + 0xb34);
  for (iVar2 = 0x7b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  dVar6 = *(double *)(param_1 + 8 + iVar3 * 8) * (in_XMM3_Qa - (double)iVar3) +
          (1.0 - (in_XMM3_Qa - (double)iVar3)) * *(double *)(param_1 + iVar3 * 8);
  iVar2 = (int)dVar6;
  dVar6 = dVar6 - (double)iVar2;
  if ((dVar6 == 0.0) && (0 < iVar2)) {
    iVar2 = iVar2 + -1;
    dVar6 = 1.0;
  }
  iVar2 = iVar2 * 0x1ec;
  dVar7 = 1.0 - dVar6;
  *(float *)(iVar1 + 0xb38) =
       (float)((double)*(float *)(iVar2 + 0x1f0 + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 4 + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb54) =
       (float)((double)*(float *)(iVar2 + 0x20c + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 0x20 + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb3c) =
       (float)((double)*(float *)(iVar2 + 500 + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 8 + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb58) =
       (float)((double)*(float *)(iVar2 + 0x210 + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 0x24 + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb40) =
       (float)((double)*(float *)(iVar2 + 0x1f8 + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 0xc + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb5c) =
       (float)((double)*(float *)(iVar2 + 0x214 + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 0x28 + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb44) =
       (float)((double)*(float *)(iVar2 + 0x1fc + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 0x10 + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb60) =
       (float)((double)*(float *)(iVar2 + 0x218 + in_EDX) * dVar6 +
              (double)*(float *)(iVar2 + 0x2c + in_EDX) * dVar7);
  *(float *)(iVar1 + 0xb78) = (float)*(double *)(iVar1 + 0xdb8);
  return;
}

