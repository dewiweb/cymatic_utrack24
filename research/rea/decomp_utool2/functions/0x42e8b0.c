// rea decompile_all
// name: FUN_0042e8b0
// address: 0x42e8b0
// body: available
// range: 0x42e8b0-0x42ea7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042e8b0(int param_1,uint param_2,char param_3)

{
  ushort uVar1;
  ushort *in_ECX;
  short *psVar2;
  short *psVar3;
  ushort *puVar4;
  float *in_EDX;
  int iVar5;
  
  if (param_3 == '\0') {
    iVar5 = param_2 - 1;
    if (-1 < iVar5) {
      if (3 < (int)param_2) {
        param_2 = param_2 >> 2;
        iVar5 = iVar5 + param_2 * -4;
        do {
          *in_EDX = (float)(int)(short)(*in_ECX << 8 | *in_ECX >> 8) * 3.0517578e-05;
          uVar1 = *(ushort *)((int)in_ECX + param_1);
          puVar4 = (ushort *)((int)in_ECX + param_1 + param_1);
          in_EDX[1] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
          uVar1 = *puVar4;
          puVar4 = (ushort *)((int)puVar4 + param_1);
          in_EDX[2] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
          uVar1 = *puVar4;
          in_ECX = (ushort *)((int)puVar4 + param_1);
          in_EDX[3] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
          in_EDX = in_EDX + 4;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      for (; -1 < iVar5; iVar5 = iVar5 + -1) {
        uVar1 = *in_ECX;
        in_ECX = (ushort *)((int)in_ECX + param_1);
        *in_EDX = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * 3.0517578e-05;
        in_EDX = in_EDX + 1;
      }
    }
  }
  else {
    iVar5 = param_2 - 1;
    if (-1 < iVar5) {
      if (3 < (int)param_2) {
        param_2 = param_2 >> 2;
        iVar5 = iVar5 + param_2 * -4;
        do {
          *in_EDX = (float)(int)(short)*in_ECX * 3.0517578e-05;
          psVar2 = (short *)((int)in_ECX + param_1 + param_1);
          in_EDX[1] = (float)(int)*(short *)((int)in_ECX + param_1) * 3.0517578e-05;
          psVar3 = (short *)((int)psVar2 + param_1);
          in_EDX[2] = (float)(int)*psVar2 * 3.0517578e-05;
          in_ECX = (ushort *)((int)psVar3 + param_1);
          in_EDX[3] = (float)(int)*psVar3 * 3.0517578e-05;
          in_EDX = in_EDX + 4;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      if (-1 < iVar5) {
        do {
          uVar1 = *in_ECX;
          in_ECX = (ushort *)((int)in_ECX + param_1);
          iVar5 = iVar5 + -1;
          *in_EDX = (float)(int)(short)uVar1 * 3.0517578e-05;
          in_EDX = in_EDX + 1;
        } while (-1 < iVar5);
        return;
      }
    }
  }
  return;
}

