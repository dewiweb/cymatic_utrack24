// rea decompile_all
// name: FUN_00034ca4
// address: 0x34ca4
// body: available
// range: 0x34ca4-0x3509b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034ca4(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  byte *local_4c;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  ushort local_3c [2];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  undefined1 auStack_30 [28];
  
  uVar6 = DAT_000350a0;
  iVar13 = *(int *)(param_2 + 0xc);
  uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar13 + 0x2a),*(undefined1 *)(iVar13 + 0x2b));
  if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0003509c)) {
    iVar13 = FUN_000366e0(DAT_000350a0);
    if (iVar13 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(4,DAT_000350a4);
    }
    return;
  }
  if ((*(byte *)(iVar13 + 0x2e) & 0xf) != 0) {
    FUN_0003b6a2(*(undefined2 *)(iVar13 + 0x34));
    cVar1 = *(char *)(iVar13 + 0x2c);
    cVar2 = *(char *)(iVar13 + 0x2d);
    uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar13 + 0x1e));
    FUN_00035a48(param_1,uVar5,iVar13 + 0x14,cVar1 - cVar2);
    uVar6 = DAT_000350a0;
    iVar13 = FUN_000366e0(DAT_000350a0);
    if (iVar13 == 0) {
      return;
    }
    FUN_0002f9bc(uVar6);
    uVar6 = 4;
    pcVar11 = DAT_000350ac;
    goto LAB_00034d54;
  }
  iVar7 = FUN_000366e0(_DAT_000350b0);
  if (iVar7 != 0) {
    FUN_0002f9bc(_DAT_000350b0);
    FUN_0002f9fc(6,s__MM__USER_DESCRIPTION_management_000350b3 + 1);
  }
  local_48 = param_1;
  local_40 = FUN_0003b6a2(*(undefined2 *)(iVar13 + 0x1e));
  local_40 = local_40 & 0xffff;
  cVar1 = *(char *)(iVar13 + 0x2c) - *(char *)(iVar13 + 0x2d);
  local_4c = (byte *)0x0;
  local_44 = 0;
  FUN_0003b64e(DAT_000350ec,0,1000);
  puVar4 = DAT_000350f0;
  iVar7 = DAT_000350ec;
  FUN_0003b646(DAT_000350ec + 0x22,iVar13 + 0x14,10);
  *(char *)(iVar7 + 0x2c) = cVar1;
  *(char *)(iVar7 + 0x2d) = cVar1;
  *(undefined1 *)(iVar7 + 0x2e) = 2;
  local_38[0] = 0x8000;
  local_38[0] = FUN_0003b618();
  FUN_0003b646(DAT_000350f4,local_38,2);
  iVar13 = FUN_0002b560(&local_4c);
  if (iVar13 == 0) {
LAB_00035054:
    FUN_0003b6a2(puVar4[2]);
    FUN_00035a48(local_48,local_40,iVar7 + 0x14,*(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d));
  }
  else {
    FUN_0003b646(DAT_000350f8,local_4c,1);
    FUN_0003b646(_DAT_000350fc,*(undefined4 *)(local_4c + 4),*local_4c);
    bVar3 = *local_4c;
    uVar12 = bVar3 + 0x39;
    if ((999 < uVar12) ||
       (puVar8 = (undefined2 *)FUN_0002b53c(1,local_3c), puVar8 == (undefined2 *)0x0))
    goto LAB_00035054;
    local_34[0] = FUN_0003b618(local_3c[0]);
    FUN_0003b646(iVar7 + uVar12,local_34,2);
    iVar13 = bVar3 + 0x3b;
    if (999 < iVar13 + (uint)local_3c[0]) goto LAB_00034eaa;
    FUN_0003b646(DAT_000350ec + iVar13,puVar8);
    uVar12 = iVar13 + (uint)local_3c[0] & 0xffff;
    FUN_0003b5c4(puVar8);
    if (999 < uVar12) goto LAB_00035054;
    puVar8 = (undefined2 *)FUN_0003b63e(0x14);
    iVar13 = FUN_0002b5b0(1,puVar8);
    if (iVar13 == 0) {
LAB_00034eaa:
      FUN_0003b5c4(puVar8);
      goto LAB_00035054;
    }
    uVar9 = (ushort)puVar8[1] + 4 & 0xffff;
    uVar5 = FUN_0003b618(*puVar8);
    *puVar8 = uVar5;
    uVar5 = FUN_0003b618(puVar8[1]);
    puVar8[1] = uVar5;
    if ((999 < uVar12 + uVar9) || (0x14 < uVar9)) goto LAB_00034eaa;
    FUN_0003b646(DAT_000350ec + uVar12,puVar8,uVar9);
    uVar12 = uVar12 + uVar9 & 0xffff;
    FUN_0003b5c4(puVar8);
    if ((999 < uVar12) || (iVar13 = FUN_0002b528(&local_44), iVar13 == 0)) goto LAB_00035054;
    FUN_0003b646(DAT_000350ec + uVar12,local_44,3);
    uVar12 = uVar12 + 4 & 0xffff;
    if ((999 < uVar12) || (iVar13 = FUN_0002b570(&local_4c), iVar13 == 0)) goto LAB_00035054;
    FUN_0003b646(DAT_000350ec + uVar12,local_4c,1);
    uVar12 = uVar12 + 1 & 0xffff;
    FUN_0003b646(DAT_000350ec + uVar12,*(undefined4 *)(local_4c + 4),*local_4c);
    uVar12 = *local_4c + uVar12 & 0xffff;
    if ((999 < uVar12) || (iVar10 = FUN_0002b5cc(&local_4c), iVar13 = DAT_000350ec, iVar10 == 0))
    goto LAB_00035054;
    FUN_0003b646(DAT_000350ec + uVar12,local_4c,1);
    uVar12 = uVar12 + 1 & 0xffff;
    FUN_0003b646(iVar13 + uVar12,*(undefined4 *)(local_4c + 4),*local_4c);
    uVar12 = *local_4c + uVar12 & 0xffff;
    if ((999 < uVar12) || (iVar10 = FUN_0002b640(&local_4c), iVar10 == 0)) goto LAB_00035054;
    FUN_0003b646(iVar13 + uVar12,local_4c,1);
    uVar12 = uVar12 + 1 & 0xffff;
    FUN_0003b646(iVar13 + uVar12,*(undefined4 *)(local_4c + 4),*local_4c);
    uVar12 = *local_4c + uVar12 & 0xffff;
    if ((999 < uVar12) || (iVar13 = FUN_0002b580(1,iVar13 + uVar12), iVar13 == 0))
    goto LAB_00035054;
    uVar9 = uVar12 + 6 & 0xffff;
    if ((uVar12 + 6 & 1) != 0) {
      uVar9 = uVar9 + 1 & 0xffff;
    }
    uVar5 = FUN_0003b618(1);
    *puVar4 = uVar5;
    uVar5 = FUN_0003b618(uVar9 - 0x34);
    puVar4[1] = uVar5;
    uVar5 = FUN_0003b618(1);
    puVar4[2] = uVar5;
    FUN_0003661e(auStack_30);
    FUN_0003665c(auStack_30,DAT_000350ec,uVar9,0xd);
    FUN_00035140(local_48,iVar7,local_40,uVar9);
    FUN_00039a50(*(undefined2 *)(*local_48 + 2),auStack_30);
  }
  uVar6 = _DAT_000350b0;
  iVar13 = FUN_000366e0(_DAT_000350b0);
  if (iVar13 == 0) {
    return;
  }
  FUN_0002f9bc(uVar6);
  uVar6 = 6;
  pcVar11 = s_FI_MM__CLOCK_DESCRIPTION_respons_000350fd + 3;
LAB_00034d54:
  FUN_0002f9fc(uVar6,pcVar11);
  return;
}

