// rea decompile_all
// name: FUN_00017d70
// address: 0x17d70
// body: available
// range: 0x17d70-0x18081 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00017d70(void)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *in_R9;
  uint *puVar13;
  bool bVar14;
  uint *in_stack_00000028;
  uint in_stack_00000030;
  uint *in_stack_00000038;
  uint *in_stack_00000040;
  
  lVar6 = KsGetDevice();
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if ((*(longlong *)(in_R9 + 0xc) == 0) && (*(longlong *)(in_R9 + 0xe) == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (bVar14) {
    plVar3 = *(longlong **)(lVar6 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      iVar9 = *(int *)(lVar6 + 0x28);
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar6 + 0x20);
      cVar4 = IoIsWdmVersionAvailable(6,0);
      if (cVar4 != '\0') {
        iVar2 = *(int *)(lVar6 + 0x28);
        *(int *)(lVar6 + 0x24) = iVar2;
        *(int *)(lVar6 + 0x20) = iVar2;
        if (iVar9 != iVar2) {
          FUN_00013850(lVar6,'\x01');
          FUN_00013850(lVar6,'\0');
        }
      }
    }
    if ((((0x57 < *in_R9) && (*(uint *)(lVar6 + 0x28) <= in_R9[0x14])) &&
        (in_R9[0x13] <= *(uint *)(lVar6 + 0x28))) &&
       ((in_stack_00000028[0x11] <= in_R9[0x12] && (in_R9[0x11] <= in_stack_00000028[0x12])))) {
      uVar12 = in_R9[0x10];
      if (((int)uVar12 <= (int)in_stack_00000028[0x10]) &&
         (((in_stack_00000028[0x10] != 2 || (uVar12 == 2)) || (uVar12 == 0xffffffff))))
      goto LAB_00017e76;
    }
    uVar7 = 0xc0000272;
  }
  else {
    in_R9 = (uint *)0x0;
LAB_00017e76:
    uVar12 = 0;
    bVar14 = *(ulonglong *)(in_stack_00000028 + 0xc) < 0x11cec35605589f81;
    if ((*(ulonglong *)(in_stack_00000028 + 0xc) == 0x11cec35605589f81) &&
       (bVar14 = *(ulonglong *)(in_stack_00000028 + 0xe) < 0x5a595500aa0001bf,
       *(ulonglong *)(in_stack_00000028 + 0xe) == 0x5a595500aa0001bf)) {
      iVar9 = 0;
    }
    else {
      iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
    }
    puVar11 = in_stack_00000028;
    puVar13 = in_stack_00000028;
    if (iVar9 == 0) {
      uVar12 = 0x68;
      puVar11 = in_stack_00000038 + 0x10;
      puVar13 = in_stack_00000038;
    }
    bVar14 = *(ulonglong *)(in_stack_00000028 + 0xc) < 0x11d0a184518590a2;
    if ((*(ulonglong *)(in_stack_00000028 + 0xc) == 0x11d0a184518590a2) &&
       (bVar14 = *(ulonglong *)(in_stack_00000028 + 0xe) < 0xf3bad94fc0002285,
       *(ulonglong *)(in_stack_00000028 + 0xe) == 0xf3bad94fc0002285)) {
      iVar9 = 0;
    }
    else {
      iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
    }
    if (iVar9 == 0) {
      uVar12 = 0x70;
      if (0x6f < in_stack_00000030) {
        in_stack_00000038[0x10] = 0;
        in_stack_00000038[0x11] = 0;
      }
      puVar11 = in_stack_00000038 + 0x12;
      puVar13 = in_stack_00000038;
    }
    else if (uVar12 == 0) {
      return 0xc0000272;
    }
    if (in_stack_00000030 == 0) {
      *in_stack_00000040 = uVar12;
      uVar7 = 0x80000005;
    }
    else if (in_stack_00000030 < uVar12) {
      uVar7 = 0xc0000023;
    }
    else {
      *in_stack_00000040 = uVar12;
      *(undefined8 *)puVar13 = *(undefined8 *)in_stack_00000028;
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(in_stack_00000028 + 2);
      *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(in_stack_00000028 + 4);
      *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(in_stack_00000028 + 6);
      *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(in_stack_00000028 + 8);
      *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(in_stack_00000028 + 10);
      *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(in_stack_00000028 + 0xc);
      *(undefined8 *)(puVar13 + 0xe) = *(undefined8 *)(in_stack_00000028 + 0xe);
      *(undefined2 *)puVar11 = 0xfffe;
      if (in_R9 == (uint *)0x0) {
        *(short *)((longlong)puVar11 + 2) = (short)in_stack_00000028[0x10];
      }
      else {
        uVar8 = (undefined2)in_stack_00000028[0x10];
        if (in_R9[0x10] < in_stack_00000028[0x10]) {
          uVar8 = (undefined2)in_R9[0x10];
        }
        *(undefined2 *)((longlong)puVar11 + 2) = uVar8;
      }
      uVar10 = *(uint *)(lVar6 + 0x28);
      uVar1 = *(ushort *)((longlong)puVar11 + 2);
      *(undefined2 *)((longlong)puVar11 + 0xe) = 0x20;
      puVar11[1] = uVar10;
      *(undefined2 *)(puVar11 + 4) = 0x16;
      *(undefined2 *)((longlong)puVar11 + 0x12) = 0x18;
      uVar5 = (int)((uint)uVar1 * 0x20) >> 3;
      *(short *)(puVar11 + 3) = (short)uVar5;
      puVar11[2] = (uVar5 & 0xffff) * uVar10;
      if (uVar1 == 1) {
        puVar11[5] = 4;
      }
      else if (uVar1 == 2) {
        puVar11[5] = 3;
      }
      else if (uVar1 == 4) {
        puVar11[5] = 0x33;
      }
      else if (uVar1 == 6) {
        puVar11[5] = 0x3f;
      }
      else if (uVar1 == 8) {
        cVar4 = IoIsWdmVersionAvailable(CONCAT71((uint7)(uint3)(uVar10 >> 8),6),0);
        uVar10 = 0xff;
        if (cVar4 != '\0') {
          uVar10 = 0x63f;
        }
        puVar11[5] = uVar10;
      }
      else {
        puVar11[5] = 0;
      }
      puVar11[6] = 1;
      puVar11[7] = 0x100000;
      puVar11[8] = 0xaa000080;
      puVar11[9] = 0x719b3800;
      *puVar13 = uVar12;
      puVar13[2] = (uint)(ushort)puVar11[3];
      uVar7 = 0;
    }
  }
  return uVar7;
}

