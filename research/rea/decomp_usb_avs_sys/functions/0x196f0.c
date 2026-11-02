// rea decompile_all
// name: FUN_000196f0
// address: 0x196f0
// body: available
// range: 0x196f0-0x199b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000196f0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  puVar3 = (uint *)param_1[0xc];
  iVar11 = -0x3ffffd8e;
  puVar8 = FUN_0001ca20(DAT_000201c0,(longlong)param_1);
  if (puVar8 != (undefined8 *)0x0) {
    lVar9 = KsGetDevice(param_1);
    bVar12 = *(ulonglong *)(puVar3 + 0xc) < *(ulonglong *)(param_4 + 0x30);
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if ((*(ulonglong *)(puVar3 + 0xc) == *(ulonglong *)(param_4 + 0x30)) &&
       (bVar12 = *(ulonglong *)(puVar3 + 0xe) < *(ulonglong *)(param_4 + 0x38),
       *(ulonglong *)(puVar3 + 0xe) == *(ulonglong *)(param_4 + 0x38))) {
      iVar10 = 0;
    }
    else {
      iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
    }
    if ((iVar10 == 0) && (0x51 < *puVar3)) {
      plVar4 = *(longlong **)(lVar9 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        iVar10 = *(int *)(lVar9 + 0x28);
        (**(code **)(*plVar4 + 0x10))(plVar4,lVar9 + 0x20);
        cVar7 = IoIsWdmVersionAvailable(6,0);
        if (cVar7 != '\0') {
          iVar2 = *(int *)(lVar9 + 0x28);
          *(int *)(lVar9 + 0x24) = iVar2;
          *(int *)(lVar9 + 0x20) = iVar2;
          if (iVar10 != iVar2) {
            FUN_00013850(lVar9,'\x01');
            FUN_00013850(lVar9,'\0');
          }
        }
      }
      if ((*(uint *)(param_4 + 0x40) == (uint)*(ushort *)((longlong)puVar3 + 0x42)) &&
         (puVar3[0x11] == *(uint *)(lVar9 + 0x28))) {
        uVar1 = *(ushort *)((longlong)puVar3 + 0x4e);
        if (((uint)uVar1 <= *(uint *)(param_4 + 0x48)) &&
           (*(uint *)(param_4 + 0x44) < (uint)uVar1 || *(uint *)(param_4 + 0x44) == (uint)uVar1)) {
          *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(param_4 + 0x40);
          cVar7 = '\0';
          *(undefined4 *)((longlong)puVar8 + 0x24) = *(undefined4 *)(param_4 + 0x40);
          if ('\0' < *(char *)(puVar8 + 5)) {
            do {
              *(char *)((longlong)cVar7 + 0x2c + (longlong)puVar8) = cVar7;
              cVar7 = cVar7 + '\x01';
            } while (cVar7 < *(char *)(puVar8 + 5));
          }
          bVar12 = *(ulonglong *)(param_4 + 0x20) < DAT_000201a8;
          iVar10 = 0;
          if ((*(ulonglong *)(param_4 + 0x20) != DAT_000201a8) ||
             (bVar12 = *(ulonglong *)(param_4 + 0x28) < DAT_000201b0,
             *(ulonglong *)(param_4 + 0x28) != DAT_000201b0)) {
            iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          }
          if (iVar10 == 0) {
            iVar10 = (int)((ulonglong)(ushort)puVar3[0x13] /
                          (ulonglong)(longlong)(int)(uint)*(ushort *)((longlong)puVar3 + 0x42));
            if ((*(short *)((longlong)puVar3 + 0x4e) == 0x10) && (iVar10 == 2)) {
              *(undefined4 *)(puVar8 + 4) = 1;
              iVar11 = 0;
            }
            if ((0x17 < *(ushort *)((longlong)puVar3 + 0x4e)) && (iVar10 == 4)) {
              *(undefined4 *)(puVar8 + 4) = 0;
              iVar11 = 0;
            }
            if ((*(short *)((longlong)puVar3 + 0x4e) == 0x18) && (iVar10 == 3)) {
              *(undefined4 *)(puVar8 + 4) = 2;
            }
            else if (iVar11 != 0) {
              return iVar11;
            }
          }
          else {
            *(undefined4 *)(puVar8 + 4) = 3;
          }
          iVar11 = 0;
          iVar10 = *(int *)(lVar9 + 0x30);
          *(undefined4 *)(lVar9 + 0x3fc8) = *(undefined4 *)(lVar9 + 0x28);
          puVar5 = *(undefined4 **)(*param_1 + 0x78);
          uVar6 = puVar3[0x13];
          *puVar5 = 1;
          puVar5[1] = 0;
          puVar5[2] = 1;
          iVar10 = iVar10 * (uint)(ushort)uVar6;
          puVar5[3] = 1;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0x4a6d5fc4;
          puVar5[7] = 0x11d17895;
          puVar5[8] = 0xa00069b0;
          puVar5[9] = 0x22806c9;
          puVar5[10] = 0;
          puVar5[0xb] = 0;
          puVar5[0xc] = 0;
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          puVar5[0x10] = 2;
          puVar5[0x11] = 4;
          puVar5[0xd] = 0;
          puVar5[0x12] = 0;
          puVar5[0x13] = 0;
          puVar5[0x14] = 0;
          puVar5[0x15] = 0xffffffff;
          puVar5[0x16] = 1;
          puVar5[0x17] = iVar10;
          puVar5[0x18] = iVar10;
          puVar5[0x19] = 1;
          puVar5[0x1a] = 0;
          puVar5[0x1b] = 0;
        }
      }
    }
  }
  return iVar11;
}

