// rea decompile_all
// name: FUN_00018090
// address: 0x18090
// body: available
// range: 0x18090-0x183a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00018090(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  
  puVar4 = (uint *)param_1[0xc];
  iVar13 = -0x3ffffd8e;
  puVar11 = FUN_0001ca20(DAT_000201c0,(longlong)param_1);
  iVar10 = -0x3ffffd8e;
  if (puVar11 != (undefined8 *)0x0) {
    lVar12 = KsGetDevice(param_1);
    iVar9 = 0;
    bVar15 = *(ulonglong *)(puVar4 + 0xc) < *(ulonglong *)(param_4 + 0x30);
    lVar12 = *(longlong *)(lVar12 + 0x10);
    if ((*(ulonglong *)(puVar4 + 0xc) != *(ulonglong *)(param_4 + 0x30)) ||
       (bVar15 = *(ulonglong *)(puVar4 + 0xe) < *(ulonglong *)(param_4 + 0x38),
       *(ulonglong *)(puVar4 + 0xe) != *(ulonglong *)(param_4 + 0x38))) {
      iVar9 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
    }
    iVar10 = iVar13;
    if ((iVar9 == 0) && (0x51 < *puVar4)) {
      plVar5 = *(longlong **)(lVar12 + 0x18);
      if (plVar5 != (longlong *)0x0) {
        iVar9 = *(int *)(lVar12 + 0x28);
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar12 + 0x20);
        cVar8 = IoIsWdmVersionAvailable(6,0);
        if (cVar8 != '\0') {
          iVar3 = *(int *)(lVar12 + 0x28);
          *(int *)(lVar12 + 0x24) = iVar3;
          *(int *)(lVar12 + 0x20) = iVar3;
          if (iVar9 != iVar3) {
            FUN_00013850(lVar12,'\x01');
            FUN_00013850(lVar12,'\0');
          }
        }
      }
      if ((((uint)*(ushort *)((longlong)puVar4 + 0x42) <= *(uint *)(param_4 + 0x40)) &&
          (*(ushort *)((longlong)puVar4 + 0x42) != 0)) && (puVar4[0x11] == *(uint *)(lVar12 + 0x28))
         ) {
        uVar1 = *(ushort *)((longlong)puVar4 + 0x4e);
        if (((uint)uVar1 <= *(uint *)(param_4 + 0x48)) &&
           (*(uint *)(param_4 + 0x44) < (uint)uVar1 || *(uint *)(param_4 + 0x44) == (uint)uVar1)) {
          *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)puVar11 + 0x34) = 0xffffffffffffffff;
          *(uint *)(puVar11 + 5) = (uint)*(ushort *)((longlong)puVar4 + 0x42);
          pcVar14 = (char *)((longlong)puVar11 + 0x2c);
          *(undefined4 *)((longlong)puVar11 + 0x24) = *(undefined4 *)(param_4 + 0x40);
          if (*(uint *)(param_4 + 0x40) == (uint)*(ushort *)((longlong)puVar4 + 0x42)) {
            cVar8 = '\0';
            if ('\0' < *(char *)(puVar11 + 5)) {
              do {
                *(char *)((longlong)cVar8 + 0x2c + (longlong)puVar11) = cVar8;
                cVar8 = cVar8 + '\x01';
              } while (cVar8 < *(char *)(puVar11 + 5));
            }
          }
          else {
            sVar2 = *(short *)((longlong)puVar4 + 0x42);
            if (sVar2 == 1) {
              if (*(int *)(param_4 + 0x40) == 1) {
                *pcVar14 = '\0';
              }
              else if (*(int *)(param_4 + 0x40) == 2) {
                *pcVar14 = '\0';
                *(undefined1 *)((longlong)puVar11 + 0x2d) = 0;
              }
              else {
                *(undefined1 *)((longlong)puVar11 + 0x2e) = 0;
              }
            }
            else if (sVar2 == 2) {
              cVar8 = '\0';
              do {
                *pcVar14 = cVar8;
                cVar8 = cVar8 + '\x01';
                pcVar14 = pcVar14 + 1;
              } while (cVar8 < '\x02');
            }
            else if (sVar2 == 4) {
              *pcVar14 = '\0';
              *(undefined1 *)((longlong)puVar11 + 0x2d) = 1;
              *(undefined1 *)(puVar11 + 6) = 2;
              *(undefined1 *)((longlong)puVar11 + 0x31) = 3;
            }
            else if (sVar2 == 6) {
              cVar8 = '\0';
              do {
                *pcVar14 = cVar8;
                cVar8 = cVar8 + '\x01';
                pcVar14 = pcVar14 + 1;
              } while (cVar8 < '\x06');
            }
            else {
              if (sVar2 != 8) {
                return -0x3ffffd8e;
              }
              cVar8 = '\0';
              do {
                *pcVar14 = cVar8;
                cVar8 = cVar8 + '\x01';
                pcVar14 = pcVar14 + 1;
              } while (cVar8 < '\a');
            }
          }
          iVar10 = (int)((ulonglong)(ushort)puVar4[0x13] /
                        (ulonglong)(longlong)(int)(uint)*(ushort *)((longlong)puVar4 + 0x42));
          if ((0x17 < *(ushort *)((longlong)puVar4 + 0x4e)) && (iVar10 == 4)) {
            *(undefined4 *)(puVar11 + 4) = 0;
            iVar13 = 0;
          }
          if ((*(short *)((longlong)puVar4 + 0x4e) == 0x18) && (iVar10 == 3)) {
            *(undefined4 *)(puVar11 + 4) = 2;
          }
          else if (iVar13 != 0) {
            return iVar13;
          }
          iVar10 = 0;
          iVar13 = *(int *)(lVar12 + 0x30);
          *(undefined4 *)(lVar12 + 0x3fc8) = *(undefined4 *)(lVar12 + 0x28);
          puVar6 = *(undefined4 **)(*param_1 + 0x78);
          uVar7 = puVar4[0x13];
          *puVar6 = 1;
          puVar6[1] = 0;
          puVar6[2] = 1;
          iVar13 = iVar13 * (uint)(ushort)uVar7;
          puVar6[3] = 1;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0x4a6d5fc4;
          puVar6[7] = 0x11d17895;
          puVar6[8] = 0xa00069b0;
          puVar6[9] = 0x22806c9;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          puVar6[0xe] = 0;
          puVar6[0xf] = 0;
          puVar6[0x10] = 2;
          puVar6[0x11] = 4;
          puVar6[0xd] = 0;
          puVar6[0x12] = 0;
          puVar6[0x13] = 0;
          puVar6[0x14] = 0;
          puVar6[0x15] = 0xffffffff;
          puVar6[0x16] = 1;
          puVar6[0x17] = iVar13;
          puVar6[0x18] = iVar13;
          puVar6[0x19] = 1;
          puVar6[0x1a] = 0;
          puVar6[0x1b] = 0;
        }
      }
    }
  }
  return iVar10;
}

