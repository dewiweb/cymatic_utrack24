// rea decompile_all
// name: FUN_005c54f0
// address: 0x5c54f0
// body: available
// range: 0x5c54f0-0x5c5666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c54f0(byte *param_1,int param_2,int *param_3,uint param_4,undefined8 param_5)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint uVar5;
  int iVar6;
  
  *(undefined8 *)(in_ECX + 2) = param_5;
  uVar5 = (uint)*param_1;
  if (uVar5 < 0x80) {
    uVar5 = param_4 & 0xff;
    *param_3 = -1;
  }
  else {
    param_2 = param_2 + -1;
    *param_3 = 0;
    param_1 = param_1 + 1;
  }
  if (uVar5 < 0x80) {
    *in_ECX = 0;
    in_ECX[4] = 0;
    return;
  }
  if (uVar5 != 0xf0) {
    if (uVar5 == 0xff) {
      iVar6 = FUN_005c5780();
      iVar4 = (int)param_3 + iVar6 + 2;
      iVar6 = param_2 + 1;
      if (iVar4 < param_2 + 1) {
        iVar6 = iVar4;
      }
      in_ECX[4] = iVar6;
      puVar3 = in_ECX;
      if (4 < iVar6) {
        puVar3 = (undefined4 *)FUN_004c554b(iVar6);
        *in_ECX = puVar3;
      }
      *(undefined1 *)puVar3 = 0xff;
      FUN_004c2c30((int)puVar3 + 1,param_1,in_ECX[4] + -1);
      *param_3 = *param_3 + in_ECX[4];
      return;
    }
    in_ECX[4] = (int)(char)(&DAT_00c13b10)[uVar5 & 0x7f];
    *(char *)in_ECX = (char)uVar5;
    if ((1 < (int)in_ECX[4]) && (*(byte *)((int)in_ECX + 1) = *param_1, 2 < (int)in_ECX[4])) {
      *(byte *)((int)in_ECX + 2) = param_1[1];
    }
    *param_3 = *param_3 + in_ECX[4];
    return;
  }
  bVar1 = false;
  iVar6 = 0;
  pbVar2 = param_1;
  do {
    if (param_1 + param_2 <= pbVar2) {
LAB_005c5572:
      pbVar2 = pbVar2 + (1 - (int)(param_1 + iVar6));
      in_ECX[4] = pbVar2;
      puVar3 = in_ECX;
      if (4 < (int)pbVar2) {
        puVar3 = (undefined4 *)FUN_004c554b(pbVar2);
        *in_ECX = puVar3;
      }
      *(undefined1 *)puVar3 = 0xf0;
      FUN_004c2c30((int)puVar3 + 1,param_1 + iVar6,in_ECX[4] + -1);
      *param_3 = *param_3 + iVar6;
      *param_3 = *param_3 + in_ECX[4];
      return;
    }
    if (*pbVar2 < 0x80) {
      if (!bVar1) {
        bVar1 = true;
        goto LAB_005c5568;
      }
    }
    else {
      if (*pbVar2 == 0xf7) {
        pbVar2 = pbVar2 + 1;
        goto LAB_005c5572;
      }
      if (bVar1) goto LAB_005c5572;
LAB_005c5568:
      iVar6 = iVar6 + 1;
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
}

