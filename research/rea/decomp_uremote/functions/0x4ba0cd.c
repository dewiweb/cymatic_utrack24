// rea decompile_all
// name: FUN_004ba0cd
// address: 0x4ba0cd
// body: available
// range: 0x4ba0cd-0x4ba232 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba0cd(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *local_8;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0xc);
  local_8 = (byte *)(iVar1 * param_2 + *(int *)(param_1 + 0x34));
  if (param_4 < 0xff) {
    do {
      puVar2 = (uint *)FUN_00475582(param_2);
      uVar5 = (*puVar2 >> 8 & 0xff00ff) * param_4;
      iVar3 = 0x100 - (uVar5 >> 0x18);
      iVar4 = ((uint)local_8[1] * iVar3 >> 8) + (uVar5 >> 8 & 0xff00ff);
      uVar5 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar3 >> 8 & 0xff00ff) +
              ((*puVar2 & 0xff00ff) * param_4 >> 8 & 0xff00ff);
      uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
      local_8[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
      param_2 = param_2 + 1;
      local_8[2] = (byte)(uVar5 >> 0x10);
      *local_8 = (byte)uVar5;
      local_8 = local_8 + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      puVar2 = (uint *)FUN_00475582(param_2);
      iVar3 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
      uVar5 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar3 >> 8 & 0xff00ff) +
              (*puVar2 & 0xff00ff);
      iVar3 = ((uint)local_8[1] * iVar3 >> 8) + (*puVar2 >> 8 & 0xff00ff);
      uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
      param_2 = param_2 + 1;
      local_8[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
      local_8[2] = (byte)(uVar5 >> 0x10);
      *local_8 = (byte)uVar5;
      local_8 = local_8 + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

