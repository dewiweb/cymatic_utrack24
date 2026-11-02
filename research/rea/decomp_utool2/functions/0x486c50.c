// rea decompile_all
// name: FUN_00486c50
// address: 0x486c50
// body: available
// range: 0x486c50-0x486d7a inclusive
// range: 0x486d80-0x486dac inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486c50(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  
  if (*(int *)(in_ECX + 0x6c) < param_2) {
    *(int *)(in_ECX + 0x6c) = param_2;
    FID_conflict__free(*(void **)(in_ECX + 0x68));
    uVar4 = FUN_004c554b(param_2 * 3);
    *(undefined4 *)(in_ECX + 0x68) = uVar4;
  }
  puVar11 = *(undefined2 **)(in_ECX + 0x68);
  FUN_0048b7f0(puVar11,param_1,param_2);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  pbVar5 = (byte *)(iVar3 * param_1 + *(int *)(in_ECX + 100));
  iVar6 = *(int *)(in_ECX + 0x50) * param_3 >> 8;
  iVar8 = param_2;
  if (iVar6 < 0xfe) {
    pbVar10 = (byte *)(puVar11 + 1);
    do {
      uVar7 = (pbVar10[-1] | 0xff0000) * iVar6;
      iVar9 = 0x100 - (uVar7 >> 0x18);
      iVar8 = ((uint)pbVar5[1] * iVar9 >> 8) + (uVar7 >> 8 & 0xff00ff);
      uVar7 = (((uint)pbVar10[-2] | (uint)*pbVar10 << 0x10) * iVar6 >> 8 & 0xff00ff) +
              (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar9 >> 8 & 0xff00ff);
      uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
      pbVar5[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
      pbVar10 = pbVar10 + 3;
      *pbVar5 = (byte)uVar7;
      pbVar5[2] = (byte)(uVar7 >> 0x10);
      pbVar5 = pbVar5 + iVar3;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  do {
    uVar2 = *puVar11;
    bVar1 = *(byte *)(puVar11 + 1);
    iVar8 = iVar8 + -1;
    *pbVar5 = (byte)uVar2;
    param_2._1_1_ = (byte)((ushort)uVar2 >> 8);
    pbVar5[1] = param_2._1_1_;
    pbVar5[2] = bVar1;
    pbVar5 = pbVar5 + iVar3;
    puVar11 = (undefined2 *)((int)puVar11 + 3);
  } while (0 < iVar8);
  return;
}

