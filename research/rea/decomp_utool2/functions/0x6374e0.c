// rea decompile_all
// name: FUN_006374e0
// address: 0x6374e0
// body: available
// range: 0x6374e0-0x637592 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006374e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (in_ECX != param_1) {
    puVar5 = (undefined4 *)*param_1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = param_1 + 1;
    }
    iVar3 = (int)param_1[6] >> 5;
    if (-1 < iVar3) {
LAB_00637505:
      uVar1 = puVar5[iVar3];
      if (uVar1 == 0) goto code_r0x0063750c;
      iVar4 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = iVar3 * 0x20 + iVar4;
      goto LAB_00637514;
    }
LAB_00637511:
    iVar4 = -1;
LAB_00637514:
    in_ECX[6] = iVar4;
    uVar1 = (iVar4 >> 5) + 1;
    uVar7 = 4;
    if (4 < uVar1) {
      uVar7 = uVar1;
    }
    in_ECX[5] = uVar7;
    FID_conflict__free((void *)*in_ECX);
    if (uVar7 < 5) {
      *in_ECX = 0;
    }
    else {
      uVar2 = FUN_004c554b(uVar7 * 4);
      *in_ECX = uVar2;
    }
    puVar5 = (undefined4 *)*param_1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = param_1 + 1;
    }
    puVar6 = (undefined4 *)*in_ECX;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = in_ECX + 1;
    }
    FUN_004c2c30(puVar6,puVar5,in_ECX[5] << 2);
    *(undefined1 *)(in_ECX + 7) = *(undefined1 *)(param_1 + 7);
  }
  return;
code_r0x0063750c:
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) goto LAB_00637511;
  goto LAB_00637505;
}

