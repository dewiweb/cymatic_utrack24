// rea decompile_all
// name: FUN_0042c2d8
// address: 0x42c2d8
// body: available
// range: 0x42c2d8-0x42cdc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042c2d8(int param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  int local_c;
  
  local_c = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(short *)(param_1 + 0xd8) == *(short *)(param_1 + 0xda)) {
    *(undefined1 **)(param_1 + 0x250) = &LAB_00429901;
    *(undefined1 **)(param_1 + 0x254) = &LAB_00429934;
    *(undefined1 **)(param_1 + 600) = &LAB_0042996e;
  }
  else {
    *(code **)(param_1 + 0x250) = FUN_00429913;
    *(code **)(param_1 + 0x254) = FUN_0042994a;
    *(undefined1 **)(param_1 + 600) = &LAB_00429986;
  }
  FUN_00429edf();
  FUN_00429d1f();
  do {
    bVar3 = *(byte *)(*(int *)(param_1 + 0x164) + *(int *)(param_1 + 0x168));
    *(byte *)(param_1 + 0x170) = bVar3;
    iVar8 = (int)(char)(&DAT_0090be50)[bVar3];
    *(int *)(param_1 + 0x174) = iVar8;
    if (iVar8 < 0) {
      if (*(int *)(param_1 + 0x168) + 1 < *(int *)(param_1 + 0x16c)) {
        *(uint *)(param_1 + 0x174) =
             2 - (uint)*(byte *)(*(int *)(param_1 + 0x164) + 1 + *(int *)(param_1 + 0x168)) * iVar8;
        goto LAB_0042c3ac;
      }
      goto LAB_0042cd95;
    }
LAB_0042c3ac:
    if (*(int *)(param_1 + 0x16c) < *(int *)(param_1 + 0x174) + *(int *)(param_1 + 0x168))
    goto LAB_0042cd95;
    iVar8 = *(int *)(param_1 + 0x10) -
            (uint)((byte)(&DAT_0090bd50)[*(byte *)(param_1 + 0x170)] >> 4);
    *(int *)(param_1 + 0x1c) = iVar8;
    if (iVar8 < 0) {
      if (*(char *)(param_1 + 0x231) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 0x81;
        goto LAB_0042cd9c;
      }
      uVar7 = 0;
      if (((&DAT_0090bd50)[*(byte *)(param_1 + 0x170)] & 0xf0) != 0) {
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x18) + (uint)uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (byte)(&DAT_0090bd50)[*(byte *)(param_1 + 0x170)] >> 4);
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    uVar5 = ((byte)(&DAT_0090bd50)[*(byte *)(param_1 + 0x170)] & 0xf) + *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x20) = uVar5;
    if (*(uint *)(param_1 + 0x14) < uVar5) {
      *(undefined4 *)(param_1 + 0xc) = 0x82;
      goto LAB_0042cd9c;
    }
    iVar8 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xc) = 0;
    puVar2 = (uint *)(iVar8 + *(int *)(param_1 + 0x1c) * 4);
    bVar3 = *(byte *)(param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x178) = 1;
    switch(bVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar7 = (ushort)(bVar3 & 1) << 0xe;
      uVar10 = uVar7 ^ 0x4000;
      if (bVar3 < 4) {
        *(ushort *)(param_1 + 0x126) = uVar7;
        *(ushort *)(param_1 + 0x128) = uVar10;
        *(ushort *)(param_1 + 0x122) = uVar7;
        *(ushort *)(param_1 + 0x124) = uVar10;
      }
      if ((bVar3 & 2) == 0) {
        *(ushort *)(param_1 + 0x12a) = uVar7;
        *(ushort *)(param_1 + 300) = uVar10;
      }
      goto LAB_0042c4c2;
    case 6:
    case 7:
      cVar4 = FUN_0042a142(bVar3,param_1 + 0x126);
      if (cVar4 == '\0') goto LAB_0042c4f1;
      break;
    case 8:
    case 9:
      cVar4 = FUN_0042a142(bVar3,param_1 + 0x12a);
      if (cVar4 == '\0') goto LAB_0042c4c2;
      break;
    case 10:
      FUN_0042a025(param_1 + 0x126);
LAB_0042c4f1:
      *(undefined4 *)(param_1 + 0x122) = *(undefined4 *)(param_1 + 0x126);
      goto LAB_0042c4c2;
    case 0xb:
      FUN_0042a025(param_1 + 0x12a);
      goto LAB_0042c4c2;
    case 0xc:
      *puVar2 = (int)*(short *)(param_1 + 0x126);
      uVar5 = (uint)*(short *)(param_1 + 0x128);
      goto LAB_0042c55f;
    case 0xd:
      *puVar2 = (int)*(short *)(param_1 + 0x12a);
      uVar5 = (uint)*(short *)(param_1 + 300);
      goto LAB_0042c55f;
    case 0xe:
      *(undefined4 *)(param_1 + 0x12a) = *(undefined4 *)(param_1 + 0x126);
LAB_0042c4c2:
      FUN_00429edf();
      break;
    case 0xf:
      FUN_0042b864();
      break;
    case 0x10:
      *(short *)(param_1 + 0x11c) = (short)*puVar2;
      break;
    case 0x11:
      *(short *)(param_1 + 0x11e) = (short)*puVar2;
      break;
    case 0x12:
      *(short *)(param_1 + 0x120) = (short)*puVar2;
      break;
    case 0x13:
      FUN_0042aa36();
      break;
    case 0x14:
      FUN_0042aa77();
      break;
    case 0x15:
      FUN_0042aab8();
      break;
    case 0x16:
      FUN_0042aaf9();
      break;
    case 0x17:
      if ((int)*puVar2 < 0) {
        *(undefined4 *)(param_1 + 0xc) = 0x84;
      }
      else {
        *(uint *)(param_1 + 0x130) = *puVar2;
      }
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x138) = 1;
      *(undefined1 **)(param_1 + 0x238) = &LAB_00429ba1;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined1 **)(param_1 + 0x238) = &LAB_00429bcc;
      break;
    case 0x1a:
      *(uint *)(param_1 + 0x134) = *puVar2;
      break;
    case 0x1b:
      FUN_0042a2c6();
      break;
    case 0x1c:
switchD_0042c46e_caseD_1c:
      if ((*puVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
        *(undefined4 *)(param_1 + 0xc) = 0x84;
      }
      piVar1 = (int *)(param_1 + 0x168);
      *piVar1 = *piVar1 + *puVar2;
      if ((*piVar1 < 0) ||
         ((0 < *(int *)(param_1 + 0x1ac) &&
          (*(int *)(*(int *)(param_1 + 0x1ac) * 0x14 + -4 + *(int *)(param_1 + 0x1b4)) <
           *(int *)(param_1 + 0x168))))) {
        *(undefined4 *)(param_1 + 0xc) = 0x84;
      }
      *(undefined1 *)(param_1 + 0x178) = 0;
      break;
    case 0x1d:
      *(uint *)(param_1 + 0x140) = *puVar2;
      break;
    case 0x1e:
      *(uint *)(param_1 + 0x144) = *puVar2;
      break;
    case 0x1f:
      uVar6 = thunk_FUN_00401000(*puVar2,*(undefined4 *)(param_1 + 0x104));
      *(undefined4 *)(param_1 + 0x148) = uVar6;
      break;
    case 0x20:
      uVar5 = *puVar2;
      goto LAB_0042c55f;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      *(undefined4 *)(param_1 + 0x20) = 0;
      break;
    case 0x23:
      uVar5 = *puVar2;
      *puVar2 = puVar2[1];
LAB_0042c55f:
      puVar2[1] = uVar5;
      break;
    case 0x24:
      uVar5 = *(uint *)(param_1 + 0x10);
      goto LAB_0042c6f7;
    case 0x25:
      uVar5 = *puVar2;
      if ((0 < (int)uVar5) && ((int)uVar5 <= *(int *)(param_1 + 0x1c))) {
        uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
LAB_0042c896:
        uVar5 = *(uint *)(iVar8 + uVar5 * 4);
        goto LAB_0042c6f7;
      }
      if (*(char *)(param_1 + 0x231) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 0x86;
      }
LAB_0042c722:
      *puVar2 = 0;
      break;
    case 0x26:
      FUN_0042a1ac();
      break;
    case 0x27:
      FUN_0042ba59();
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
switchD_0042c46e_caseD_28:
      FUN_0042c23d();
      break;
    case 0x29:
      FUN_0042bd4b();
      break;
    case 0x2a:
      FUN_0042a49a(puVar2);
      break;
    case 0x2b:
      FUN_0042a3e4();
      break;
    case 0x2c:
      FUN_0042a2ee();
      break;
    case 0x2d:
      FUN_0042a395();
      break;
    case 0x2e:
    case 0x2f:
      FUN_0042b243();
      break;
    case 0x30:
    case 0x31:
      FUN_0042bee8();
      break;
    case 0x32:
    case 0x33:
      FUN_0042ae7b();
      break;
    case 0x34:
    case 0x35:
      FUN_0042af18();
      break;
    case 0x36:
    case 0x37:
      FUN_0042afef();
      break;
    case 0x38:
      FUN_0042b09e(puVar2);
      break;
    case 0x39:
      FUN_0042bad8();
      break;
    case 0x3a:
    case 0x3b:
      FUN_0042b14a(puVar2);
      break;
    case 0x3c:
      FUN_0042b7ac();
      break;
    case 0x3d:
      *(undefined4 *)(param_1 + 0x138) = 2;
      *(undefined1 **)(param_1 + 0x238) = &LAB_00429c52;
      break;
    case 0x3e:
    case 0x3f:
      FUN_0042b2b8();
      break;
    case 0x40:
      FUN_0042a606(puVar2);
      break;
    case 0x41:
      FUN_0042a66f(puVar2);
      break;
    case 0x42:
      if (*puVar2 < (uint)*(ushort *)(param_1 + 0x1d4)) {
        *(uint *)(*(int *)(param_1 + 0x1d8) + *puVar2 * 4) = puVar2[1];
      }
      else {
LAB_0042c84b:
        if (*(char *)(param_1 + 0x231) != '\0') goto LAB_0042c858;
      }
      break;
    case 0x43:
      uVar5 = *puVar2;
      if (uVar5 < *(ushort *)(param_1 + 0x1d4)) {
        iVar8 = *(int *)(param_1 + 0x1d8);
        goto LAB_0042c896;
      }
LAB_0042c882:
      if (*(char *)(param_1 + 0x231) == '\0') goto LAB_0042c722;
LAB_0042c858:
      *(undefined4 *)(param_1 + 0xc) = 0x86;
      break;
    case 0x44:
      if (*(uint *)(param_1 + 0x17c) <= *puVar2) goto LAB_0042c84b;
      (**(code **)(param_1 + 0x254))(param_1,*puVar2,puVar2[1]);
      break;
    case 0x45:
      if (*(uint *)(param_1 + 0x17c) <= *puVar2) goto LAB_0042c882;
      uVar5 = (**(code **)(param_1 + 0x250))(param_1,*puVar2);
      goto LAB_0042c6f7;
    case 0x46:
    case 0x47:
      FUN_0042a782();
      break;
    case 0x48:
      FUN_0042a7d5(puVar2);
      break;
    case 0x49:
    case 0x4a:
      FUN_0042a84b(puVar2);
      break;
    case 0x4b:
    case 0x4c:
      uVar5 = FUN_004298e7();
      goto LAB_0042c6f7;
    case 0x4d:
      *(undefined1 *)(param_1 + 0x13c) = 1;
      break;
    case 0x4e:
      *(undefined1 *)(param_1 + 0x13c) = 0;
      break;
    case 0x4f:
      *(undefined4 *)(param_1 + 0xc) = 0x87;
      break;
    case 0x50:
      uVar5 = (uint)((int)*puVar2 < (int)puVar2[1]);
      goto LAB_0042c934;
    case 0x51:
      uVar5 = (uint)((int)*puVar2 <= (int)puVar2[1]);
      goto LAB_0042c934;
    case 0x52:
      uVar5 = (uint)((int)puVar2[1] < (int)*puVar2);
      goto LAB_0042c934;
    case 0x53:
      uVar5 = (uint)((int)puVar2[1] <= (int)*puVar2);
      goto LAB_0042c934;
    case 0x54:
      uVar5 = (uint)(*puVar2 == puVar2[1]);
      goto LAB_0042c6f7;
    case 0x55:
      uVar5 = (uint)(*puVar2 != puVar2[1]);
      goto LAB_0042c934;
    case 0x56:
      bVar3 = (**(code **)(param_1 + 0x238))(param_1,*puVar2,0);
      uVar5 = (uint)((bVar3 & 0x7f) == 0x40);
LAB_0042c934:
      *puVar2 = uVar5;
      break;
    case 0x57:
      uVar5 = (**(code **)(param_1 + 0x238))(param_1,*puVar2,0);
      uVar5 = uVar5 & 0x7f;
      goto LAB_0042c9a6;
    case 0x58:
      FUN_0042a28c();
      break;
    case 0x5a:
      uVar5 = 0;
      if (*puVar2 != 0) {
LAB_0042c9c6:
        uVar5 = 0;
        if (puVar2[1] != 0) goto LAB_0042c9cf;
      }
      goto LAB_0042c6f7;
    case 0x5b:
      if (*puVar2 == 0) goto LAB_0042c9c6;
LAB_0042c9cf:
      uVar5 = 1;
      goto LAB_0042c6f7;
    case 0x5c:
      uVar5 = *puVar2;
LAB_0042c9a6:
      uVar5 = (uint)(uVar5 == 0);
      goto LAB_0042c6f7;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_0042c02f();
      break;
    case 0x5e:
      *(short *)(param_1 + 0x14c) = (short)*puVar2;
      break;
    case 0x5f:
      *(short *)(param_1 + 0x14e) = (short)*puVar2;
      break;
    case 0x60:
      *puVar2 = *puVar2 + puVar2[1];
      break;
    case 0x61:
      *puVar2 = *puVar2 - puVar2[1];
      break;
    case 0x62:
      if (puVar2[1] != 0) {
        uVar5 = FUN_0040d286(0x40);
        goto LAB_0042c6f7;
      }
      *(undefined4 *)(param_1 + 0xc) = 0x85;
      break;
    case 99:
      uVar5 = FUN_0040d230(puVar2[1]);
      goto LAB_0042c6f7;
    case 100:
      uVar5 = *puVar2;
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      goto LAB_0042c6f7;
    case 0x65:
      *puVar2 = -*puVar2;
      break;
    case 0x66:
      *puVar2 = *puVar2 & 0xffffffc0;
      break;
    case 0x67:
      uVar5 = *puVar2 + 0x3f & 0xffffffc0;
      goto LAB_0042c6f7;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      uVar5 = (**(code **)(param_1 + 0x238))
                        (param_1,*puVar2,*(undefined4 *)(param_1 + -0x98 + (uint)bVar3 * 4));
      goto LAB_0042c6f7;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar5 = FUN_00429b7c(param_1,*puVar2,*(undefined4 *)(param_1 + -0xa8 + (uint)bVar3 * 4));
LAB_0042c6f7:
      *puVar2 = uVar5;
      break;
    case 0x70:
      uVar5 = *puVar2;
      if (*(uint *)(param_1 + 0x17c) <= uVar5) goto LAB_0042c84b;
      uVar6 = thunk_FUN_00401000(puVar2[1],*(undefined4 *)(param_1 + 0x104));
      *(undefined4 *)(*(int *)(param_1 + 0x180) + uVar5 * 4) = uVar6;
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      FUN_0042c113();
      break;
    case 0x76:
      FUN_00429da7(*puVar2);
      *(undefined4 *)(param_1 + 0x138) = 6;
      *(code **)(param_1 + 0x238) = FUN_00429c7d;
      break;
    case 0x77:
      FUN_00429da7(*puVar2);
      *(undefined4 *)(param_1 + 0x138) = 7;
      *(code **)(param_1 + 0x238) = FUN_00429cca;
      break;
    case 0x78:
      if (puVar2[1] != 0) goto switchD_0042c46e_caseD_1c;
      break;
    case 0x79:
      if (puVar2[1] == 0) goto switchD_0042c46e_caseD_1c;
      break;
    case 0x7a:
      *(undefined4 *)(param_1 + 0x138) = 5;
      *(code **)(param_1 + 0x238) = FUN_00429b7c;
      break;
    case 0x7c:
      *(undefined4 *)(param_1 + 0x138) = 4;
      *(undefined1 **)(param_1 + 0x238) = &LAB_00429c27;
      break;
    case 0x7d:
      *(undefined4 *)(param_1 + 0x138) = 3;
      *(undefined1 **)(param_1 + 0x238) = &LAB_00429bff;
      break;
    case 0x80:
      FUN_0042ac58();
      break;
    case 0x81:
      FUN_0042accf();
      break;
    case 0x82:
      FUN_0042ad16();
      break;
    case 0x85:
      FUN_0042ab99();
      break;
    case 0x86:
    case 0x87:
      FUN_0042a96f();
      break;
    case 0x88:
      FUN_0042c1f4();
      break;
    case 0x89:
      FUN_0042a55b();
      break;
    case 0x8a:
      FUN_0042a1f6();
      break;
    case 0x8b:
      uVar5 = puVar2[1];
      if ((int)*puVar2 < (int)uVar5) goto LAB_0042c6f7;
      break;
    case 0x8c:
      uVar5 = puVar2[1];
      if ((int)uVar5 < (int)*puVar2) goto LAB_0042c6f7;
      break;
    case 0x8d:
      FUN_0042ac4b();
      break;
    case 0x8e:
      FUN_0042ab66();
      break;
    default:
      if (bVar3 < 0xe0) {
        if (bVar3 < 0xc0) {
          if (bVar3 < 0xb8) {
            if (bVar3 < 0xb0) goto switchD_0042c46e_caseD_28;
            FUN_0042a6d2(puVar2);
          }
          else {
            FUN_0042a729(puVar2);
          }
        }
        else {
          FUN_0042b3bd();
        }
      }
      else {
        FUN_0042b594();
      }
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x20);
      if (*(char *)(param_1 + 0x178) != '\0') {
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + *(int *)(param_1 + 0x174);
      }
      local_c = local_c + 1;
      if (1000000 < local_c) {
        return 0x8b;
      }
    }
    else {
      if (*(int *)(param_1 + 0xc) != 0x80) goto LAB_0042cd9c;
      uVar5 = *(uint *)(param_1 + 0x1a0);
      uVar11 = *(int *)(param_1 + 0x198) * 0x14 + uVar5;
      while( true ) {
        if (uVar11 <= uVar5) {
          *(undefined4 *)(param_1 + 0xc) = 0x80;
          goto LAB_0042cd9c;
        }
        if ((*(char *)(uVar5 + 0x10) != '\0') &&
           (*(char *)(param_1 + 0x170) == *(char *)(uVar5 + 0xc))) break;
        uVar5 = uVar5 + 0x14;
      }
      if (*(int *)(param_1 + 0x1b0) <= *(int *)(param_1 + 0x1ac)) {
        *(undefined4 *)(param_1 + 0xc) = 0x86;
        goto LAB_0042cd9c;
      }
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x14 + *(int *)(param_1 + 0x1b4));
      *puVar9 = *(undefined4 *)(param_1 + 0x160);
      puVar9[1] = *(int *)(param_1 + 0x168) + 1;
      puVar9[2] = 1;
      puVar9[3] = *(undefined4 *)(uVar5 + 4);
      puVar9[4] = *(undefined4 *)(uVar5 + 8);
      cVar4 = FUN_004299cf();
      if (cVar4 == '\x01') goto LAB_0042cd9c;
    }
    if (*(int *)(param_1 + 0x16c) <= *(int *)(param_1 + 0x168)) {
      if (*(int *)(param_1 + 0x1ac) < 1) {
        return 0;
      }
LAB_0042cd95:
      *(undefined4 *)(param_1 + 0xc) = 0x83;
LAB_0042cd9c:
      if ((*(int *)(param_1 + 0xc) != 0) && (*(char *)(param_1 + 0x1e8) == '\0')) {
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x12d) = 0;
      }
      return *(undefined4 *)(param_1 + 0xc);
    }
    if (*(char *)(param_1 + 0x1e8) != '\0') {
      return 0;
    }
  } while( true );
}

