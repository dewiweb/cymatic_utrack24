// rea decompile_all
// name: FUN_004544e0
// address: 0x4544e0
// body: available
// range: 0x4544e0-0x454644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004544e0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 in_XMM0_Qa;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd610;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c2c0(**(undefined4 **)(in_ECX + 4),uVar2);
  **(int **)(in_ECX + 4) = in_ECX;
  pbVar8 = (byte *)**(undefined4 **)(in_ECX + 4);
  iVar3 = FUN_00426f70();
  if (iVar3 == 0x40) {
    bVar1 = *pbVar8;
    pbVar7 = pbVar8 + 1;
    if ((char)bVar1 < '\0') {
      uVar4 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar4 < 9) break;
          uVar4 = uVar4 >> 1;
          pbVar7 = pbVar7 + 1;
        } while ((uVar4 & (int)(char)bVar1) != 0);
      }
    }
    FUN_0045c2c0(pbVar7,uVar2);
    **(undefined4 **)(in_ECX + 4) = pbVar8;
  }
  iVar5 = FUN_00426f70();
  if (iVar5 == 0x2d) {
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if ((char)bVar1 < '\0') {
      uVar4 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar4 < 9) break;
          uVar4 = uVar4 >> 1;
          pbVar8 = pbVar8 + 1;
        } while ((uVar4 & (int)(char)bVar1) != 0);
      }
    }
    FUN_0045c2c0(pbVar8,uVar2);
  }
  iVar5 = FUN_00426f70();
  if (9 < iVar5 - 0x30U) {
    if (iVar5 == 0x2e) {
      FUN_0044ebd0(1);
      iVar5 = FUN_00426f70();
      if (iVar5 - 0x30U < 10) goto LAB_00454608;
    }
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
LAB_00454608:
  puVar6 = operator_new(0x18);
  FUN_0045c380();
  puVar6[1] = 0;
  *puVar6 = juce::Expression::Helpers::Constant::vftable;
  *(undefined8 *)(puVar6 + 2) = in_XMM0_Qa;
  *(bool *)(puVar6 + 4) = iVar3 == 0x40;
  ExceptionList = local_10;
  return puVar6;
}

