// rea decompile_all
// name: FUN_00442550
// address: 0x442550
// body: available
// range: 0x442550-0x4427d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442550(int param_1,float *param_2,uint param_3)

{
  ushort uVar1;
  float *pfVar2;
  undefined4 *in_ECX;
  int iVar3;
  ushort *puVar4;
  
  pfVar2 = (float *)*in_ECX;
  if ((param_2 == pfVar2) && (param_1 * 2 < 4)) {
    pfVar2 = pfVar2 + param_3;
    iVar3 = param_3 - 1;
    puVar4 = (ushort *)((int)param_2 + param_1 * param_3 * 2);
    if (-1 < iVar3) {
      if (3 < (int)param_3) {
        param_3 = param_3 >> 2;
        iVar3 = iVar3 + param_3 * -4;
        do {
          puVar4 = puVar4 + -param_1;
          pfVar2[-1] = (float)(int)(short)(*puVar4 << 8 | *puVar4 >> 8) * 3.0517578e-05;
          puVar4 = puVar4 + -param_1;
          pfVar2[-2] = (float)(int)(short)(*puVar4 << 8 | *puVar4 >> 8) * 3.0517578e-05;
          uVar1 = puVar4[-param_1];
          pfVar2[-3] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
          pfVar2 = pfVar2 + -4;
          puVar4 = puVar4 + -param_1 + -param_1;
          *pfVar2 = (float)(int)(short)(*puVar4 << 8 | *puVar4 >> 8) * 3.0517578e-05;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      for (; -1 < iVar3; iVar3 = iVar3 + -1) {
        pfVar2 = pfVar2 + -1;
        puVar4 = puVar4 + -param_1;
        *pfVar2 = (float)(int)(short)(*puVar4 << 8 | *puVar4 >> 8) * 3.0517578e-05;
      }
    }
  }
  else {
    iVar3 = param_3 - 1;
    if (-1 < iVar3) {
      if (3 < (int)param_3) {
        param_3 = param_3 >> 2;
        iVar3 = iVar3 + param_3 * -4;
        do {
          *pfVar2 = (float)(int)(short)(*(ushort *)param_2 << 8 | *(ushort *)param_2 >> 8) *
                    3.0517578e-05;
          puVar4 = (ushort *)((int)param_2 + param_1 * 2);
          uVar1 = *puVar4;
          pfVar2[1] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
          puVar4 = puVar4 + param_1;
          pfVar2[2] = (float)(int)(short)(*puVar4 << 8 | *puVar4 >> 8) * 3.0517578e-05;
          uVar1 = puVar4[param_1];
          pfVar2[3] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
          pfVar2 = pfVar2 + 4;
          param_2 = (float *)(puVar4 + param_1 + param_1);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      for (; -1 < iVar3; iVar3 = iVar3 + -1) {
        *pfVar2 = (float)(int)(short)(*(ushort *)param_2 << 8 | *(ushort *)param_2 >> 8) *
                  3.0517578e-05;
        param_2 = (float *)((int)param_2 + param_1 * 2);
        pfVar2 = pfVar2 + 1;
      }
    }
  }
  return;
}

