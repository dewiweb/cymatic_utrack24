// rea decompile_all
// name: FUN_004ba448
// address: 0x4ba448
// body: available
// range: 0x4ba448-0x4ba4f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba448(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0xc);
  pbVar5 = (byte *)(iVar1 * param_2 + *(int *)(param_1 + 0x6c));
  do {
    puVar2 = (uint *)FUN_004755ed(param_2);
    iVar4 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
    uVar3 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar4 >> 8 & 0xff00ff) +
            (*puVar2 & 0xff00ff);
    iVar4 = ((uint)pbVar5[1] * iVar4 >> 8) + (*puVar2 >> 8 & 0xff00ff);
    uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
    param_2 = param_2 + 1;
    pbVar5[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
    pbVar5[2] = (byte)(uVar3 >> 0x10);
    *pbVar5 = (byte)uVar3;
    pbVar5 = pbVar5 + iVar1;
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}

