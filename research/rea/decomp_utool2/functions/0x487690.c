// rea decompile_all
// name: FUN_00487690
// address: 0x487690
// body: available
// range: 0x487690-0x4877eb inclusive
// range: 0x4877f0-0x487828 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487690(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  if (*(int *)(in_ECX + 0x6c) < (int)param_2) {
    *(uint *)(in_ECX + 0x6c) = param_2;
    FID_conflict__free(*(void **)(in_ECX + 0x68));
    uVar2 = FUN_004c554b(param_2 * 3);
    *(undefined4 *)(in_ECX + 0x68) = uVar2;
  }
  puVar8 = *(ushort **)(in_ECX + 0x68);
  FUN_0048b7f0(puVar8,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  iVar3 = *(int *)(in_ECX + 0x50) * param_3 >> 8;
  puVar5 = (uint *)(iVar1 * param_1 + *(int *)(in_ECX + 100));
  iVar4 = param_2;
  if (iVar3 < 0xfe) {
    puVar8 = puVar8 + 1;
    do {
      uVar6 = (*(byte *)((int)puVar8 + -1) | 0xff0000) * iVar3;
      param_2 = param_2 + -1;
      iVar4 = 0x100 - (uVar6 >> 0x18);
      uVar7 = (((uint)(byte)*puVar8 << 0x10 | (uint)(byte)puVar8[-1]) * iVar3 >> 8 & 0xff00ff) +
              ((*puVar5 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      uVar6 = (uVar6 >> 8 & 0xff00ff) + ((*puVar5 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      puVar8 = (ushort *)((int)puVar8 + 3);
      *puVar5 = (((0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100) ^
                (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7)) & 0xff00ff ^
                (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) << 8;
      puVar5 = (uint *)((int)puVar5 + iVar1);
    } while (0 < (int)param_2);
    return;
  }
  do {
    iVar4 = iVar4 + -1;
    param_2 = (uint)*puVar8;
    uVar6 = param_2;
    param_2._1_1_ = (byte)(*puVar8 >> 8);
    *puVar5 = (((byte)puVar8[1] | 0xffffff00) << 8 | (uint)param_2._1_1_) << 8 | uVar6 & 0xff;
    puVar5 = (uint *)((int)puVar5 + iVar1);
    puVar8 = (ushort *)((int)puVar8 + 3);
  } while (0 < iVar4);
  return;
}

