// rea decompile_all
// name: FUN_00560db0
// address: 0x560db0
// body: available
// range: 0x560db0-0x561dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560db0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007120f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063e930(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = Icons::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 1;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  *(undefined1 *)(in_ECX + 0x20) = 1;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x28) = 1;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  *(undefined1 *)(in_ECX + 0x30) = 1;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  *(undefined1 *)(in_ECX + 0x38) = 1;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  *(undefined1 *)(in_ECX + 0x40) = 1;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  *(undefined1 *)(in_ECX + 0x48) = 1;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  *(undefined1 *)(in_ECX + 0x50) = 1;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  *(undefined1 *)(in_ECX + 0x58) = 1;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  *(undefined1 *)(in_ECX + 0x60) = 1;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  *(undefined1 *)(in_ECX + 0x68) = 1;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x6f] = 0;
  *(undefined1 *)(in_ECX + 0x70) = 1;
  in_ECX[0x71] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  *(undefined1 *)(in_ECX + 0x78) = 1;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  *(undefined1 *)(in_ECX + 0x80) = 1;
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x84] = 0;
  in_ECX[0x85] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0x87] = 0;
  *(undefined1 *)(in_ECX + 0x88) = 1;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x8c] = 0;
  in_ECX[0x8d] = 0;
  in_ECX[0x8e] = 0;
  in_ECX[0x8f] = 0;
  *(undefined1 *)(in_ECX + 0x90) = 1;
  in_ECX[0x91] = 0;
  in_ECX[0x92] = 0;
  in_ECX[0x93] = 0;
  in_ECX[0x94] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  *(undefined1 *)(in_ECX + 0x98) = 1;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9c] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  in_ECX[0x9f] = 0;
  *(undefined1 *)(in_ECX + 0xa0) = 1;
  in_ECX[0xa1] = 0;
  in_ECX[0xa2] = 0;
  in_ECX[0xa3] = 0;
  in_ECX[0xa4] = 0;
  in_ECX[0xa5] = 0;
  in_ECX[0xa6] = 0;
  in_ECX[0xa7] = 0;
  *(undefined1 *)(in_ECX + 0xa8) = 1;
  in_ECX[0xa9] = 0;
  in_ECX[0xaa] = 0;
  in_ECX[0xab] = 0;
  in_ECX[0xac] = 0;
  in_ECX[0xad] = 0;
  in_ECX[0xae] = 0;
  in_ECX[0xaf] = 0;
  *(undefined1 *)(in_ECX + 0xb0) = 1;
  local_8._0_1_ = 0x16;
  local_8._1_3_ = 0;
  FUN_0045c990(
              "M22.08,0.098L10.97,3.497C9.624,3.881,8.533,5.285,8.533,6.631v11.557c0,0,0,0.158,0,0.162                                    c0,0-0.805-0.543-2.598-0.289c-2.633,0.374-4.768,2.395-4.768,4.515s2.135,3.419,4.768,3.045c2.635-0.372,4.566-2.331,4.566-4.452                                    c0,0,0-9.066,0-10.006s1.13-1.343,1.13-1.343l9.823-3.079c0,0,1.087-0.365,1.087,0.641s0,8.031,0,8.031s0,0.002,0,0.006                                    c0,0-1.001-0.576-2.794-0.358c-2.633,0.319-4.768,2.298-4.768,4.417c0,2.121,2.135,3.463,4.768,3.143                                    c2.635-0.319,4.77-2.297,4.77-4.418V1.84C24.517,0.494,23.425-0.286,22.08,0.098z"
              );
  local_8._0_1_ = 0x17;
  FUN_00560d40(in_ECX + 1,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M12.6,90.352H84c7.14,0,12.6-5.467,12.6-12.195V32.32c0-7.149-5.88-13.457-12.6-13.457H56.28L45.78,7.51                                    c-0.84-0.841-1.68-1.262-2.94-1.262H12.6C5.46,6.248,0,14.238,0,20.966v58.872C0,84.885,3.36,90.352,12.6,90.352z M8.4,20.966                                    c0-2.944,2.52-6.308,4.2-6.308h28.14l10.08,10.933c1.26,0.841,2.52,1.682,3.78,1.682H84c2.1,0,4.2,2.523,4.2,5.046v45.836                                    c0,2.523-2.1,3.785-4.2,3.785H12.6c-4.2,0-4.2-1.682-4.2-2.103V20.966z"
              );
  local_8._0_1_ = 0x18;
  FUN_00560d40(in_ECX + 9,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "m 129.9,189.5 c -26,0 -41.2,15.92 -66.4,48.56 L 33.1,217.1 c 14.8,-21.6 24.8,-34.48 42.4,-47.92 15.927778,-12.02704                                    36.4,-24.16 59.601,-24.16 37.175,0 57.177,16.953 88,40.8 30.4,23.52 51.601,33.601 70.8,33.601 8.4,0 23.38156,-4.40519                                    33.201,-12.32 13.11941,-9.13579 22.4,-21.12 36.4,-43.681 l 30.8,23.84 c -16.4,24.96 -27.2,37.04 -40.4,48.56 -20.4,18.24                                    -39.2,28.561 -65.2,28.561 C 218.652,264.38 187.714,189.5 129.9,189.5 z"
              );
  local_8._0_1_ = 0x19;
  FUN_00560d40(in_ECX + 0x11,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_0073fd98);
  local_8._0_1_ = 0x1a;
  FUN_00560d40(in_ECX + 0x19,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_0073f518);
  local_8._0_1_ = 0x1b;
  FUN_00560d40(in_ECX + 0x21,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "m 275.01403,577.33795 -11.99556,7.44987 m 11.99556,-7.44987 0,-19.06663 m 1.95025,19.13548 c 0,1.06019 -0.89943,1.91964                                    -2.00893,1.91964 -1.1095,0 -2.00893,-0.85945 -2.00893,-1.91964 0,-1.06019 0.89943,-1.91964 2.00893,-1.91964 1.1095,0                                    2.00893,0.85945 2.00893,1.91964 z m 23.05103,-0.0688 c 0,13.80782 -11.19345,25.00128 -25.00127,25.00128 -13.80782,0                                    -25.00128,-11.19346 -25.00128,-25.00128 0,-13.80782 11.19346,-25.00127 25.00128,-25.00127 13.80782,0 25.00127,11.19345                                    25.00127,25.00127 z"
              );
  local_8._0_1_ = 0x1c;
  FUN_00560d40(in_ECX + 0x29,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "m 529.28571,787.7193 10.35714,0 0,31.96429 -10.35714,0 z m -14.4643,0 10.53571,0 0,31.96429 -10.53571,0 z"
              );
  local_8._0_1_ = 0x1d;
  FUN_00560d40(in_ECX + 0x31,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M53.0645161,54.9839521 L53.0645161,15 L93.6671912,34.9920958 L53.0645161,54.9839521 Z"
              );
  local_8._0_1_ = 0x1e;
  FUN_00560d40(in_ECX + 0x39,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990("m 277.14285,412.36218 50,0 0,50 -50,0 z");
  local_8._0_1_ = 0x1f;
  FUN_00560d40(in_ECX + 0x41,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_00740460);
  local_8._0_1_ = 0x20;
  FUN_00560d40(in_ECX + 0x49,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M40.5,20.25c0,9.374-7.625,17-17,17c-1.656,0-3-1.343-3-3s1.344-3,3-3c6.064,0,11-4.936,11-11c0-6.065-4.936-11-11-11                                     c-5.756,0-10.486,4.447-10.953,10.086l1.832-1.832c1.171-1.172,3.071-1.172,4.242,0c1.172,1.171,1.172,3.071,0,4.242l-6.75,6.75                                     c-0.563,0.562-1.326,0.879-2.121,0.879c-0.796,0-1.559-0.316-2.121-0.879l-6.75-6.75c-1.172-1.172-1.172-3.071,0-4.242                                     c1.172-1.172,3.071-1.172,4.243,0l1.444,1.444c0.669-8.766,8-15.698,16.934-15.698C32.875,3.25,40.5,10.876,40.5,20.25z"
              );
  local_8._0_1_ = 0x21;
  FUN_00560d40(in_ECX + 0x51,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M39.622,21.746l-6.749,6.75c-0.562,0.562-1.326,0.879-2.122,0.879s-1.56-0.316-2.121-0.879l-6.75-6.75                                     c-1.171-1.171-1.171-3.071,0-4.242c1.171-1.172,3.071-1.172,4.242,0l1.832,1.832C27.486,13.697,22.758,9.25,17,9.25                                     c-6.064,0-11,4.935-11,11c0,6.064,4.936,11,11,11c1.657,0,3,1.343,3,3s-1.343,3-3,3c-9.373,0-17-7.626-17-17s7.627-17,17-17                                     c8.936,0,16.266,6.933,16.936,15.698l1.442-1.444c1.172-1.172,3.072-1.172,4.242,0C40.792,18.674,40.792,20.574,39.622,21.746z"
              );
  local_8._0_1_ = 0x22;
  FUN_00560d40(in_ECX + 0x59,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_00742ee0);
  local_8._0_1_ = 0x23;
  FUN_00560d40(in_ECX + 0x61,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M486.863,300.74V172.911h-69.587v-27.093H291.734v74.16H115.069c0-25.065,0-47.866,0-65.036h95.882                                     V27.093h-69.544V0H15.822v154.986h72.327v284.907h203.607v62.814h195.129V374.792h-69.587v-27.093H291.756v65.23                                     c-44.867,0-157.855,0-176.665,0c0-13.007,0-93.294,0-166.009h176.665v53.819C291.756,300.74,486.863,300.74,486.863,300.74z"
              );
  local_8._0_1_ = 0x24;
  FUN_00560d40(in_ECX + 0x69,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_00744998);
  local_8._0_1_ = 0x25;
  FUN_00560d40(in_ECX + 0x71,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_00744250);
  local_8._0_1_ = 0x26;
  FUN_00560d40(in_ECX + 0x79,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_00743bd0);
  local_8._0_1_ = 0x27;
  FUN_00560d40(in_ECX + 0x81,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M9.821,118.048h104.4c7.3,0,12-7.7,8.7-14.2l-52.2-92.5c-3.601-7.199-13.9-7.199-17.5,0l-52.2,92.5                                    C-2.179,110.348,2.521,118.048,9.821,118.048z M70.222,96.548c0,4.8-3.5,8.5-8.5,8.5s-8.5-3.7-8.5-8.5v-0.2c0-4.8,3.5-8.5,8.5-8.5                                    s8.5,3.7,8.5,8.5V96.548z M57.121,34.048h9.801c2.699,0,4.3,2.3,4,5.2l-4.301,37.6c-0.3,2.7-2.1,4.4-4.6,4.4s-4.3-1.7-4.6-4.4                                    l-4.301-37.6C52.821,36.348,54.422,34.048,57.121,34.048z"
              );
  local_8._0_1_ = 0x28;
  FUN_00560d40(in_ECX + 0x89,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(
              "M87.12,0C39.082,0,0,39.082,0,87.12s39.082,87.12,87.12,87.12s87.12-39.082,87.12-87.12S135.157,0,87.12,0z M87.12,159.305                                   c-39.802,0-72.185-32.383-72.185-72.185S47.318,14.935,87.12,14.935s72.185,32.383,72.185,72.185S126.921,159.305,87.12,159.305z                                   M120.83,53.414c-2.917-2.917-7.647-2.917-10.559,0L87.12,76.568L63.969,53.414c-2.917-2.917-7.642-2.917-10.559,0                                   s-2.917,7.642,0,10.559l23.151,23.153L53.409,110.28c-2.917,2.917-2.917,7.642,0,10.559c1.458,1.458,3.369,2.188,5.28,2.188                                   c1.911,0,3.824-0.729,5.28-2.188L87.12,97.686l23.151,23.153c1.458,1.458,3.369,2.188,5.28,2.188c1.911,0,3.821-0.729,5.28-2.188                                   c2.917-2.917,2.917-7.642,0-10.559L97.679,87.127l23.151-23.153C123.747,61.057,123.747,56.331,120.83,53.414z"
              );
  local_8._0_1_ = 0x29;
  FUN_00560d40(in_ECX + 0xa1,&local_14);
  local_8._0_1_ = 0x16;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990(&DAT_007410f0);
  local_8 = CONCAT31(local_8._1_3_,0x2a);
  FUN_00560d40(in_ECX + 0xa9,&local_14);
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_00682020(0x41000000);
  local_28 = 0x40000000;
  uStack_24 = 0x40400000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x40400000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x40a00000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x40a00000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x40e00000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x40e00000;
  FUN_00681a00(&local_28);
  FUN_00682020(0x41000000);
  local_28 = 0x40000000;
  uStack_24 = 0x41500000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x41500000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x41700000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x41700000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x41880000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x41880000;
  FUN_00681a00(&local_28);
  FUN_00682020(0x41600000);
  local_28 = 0x41700000;
  uStack_24 = 0x40800000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x40800000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x40c00000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x40c00000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x41000000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x41000000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x41200000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x41200000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x41400000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x41400000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x41600000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x41600000;
  FUN_00681a00(&local_28);
  local_28 = 0x40e00000;
  uStack_24 = 0x40a00000;
  uStack_20 = 0x41400000;
  uStack_1c = 0x41100000;
  FUN_006814d0(&local_28,0x40000000);
  local_28 = 0x40e00000;
  uStack_24 = 0x41700000;
  uStack_20 = 0x41400000;
  uStack_1c = 0x41300000;
  FUN_006814d0(&local_28,0x40000000);
  FUN_00683720(0x3f800000,1);
  FUN_00682020(0x41000000);
  local_28 = 0x40000000;
  uStack_24 = 0x40400000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x40400000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x40a00000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x40a00000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x40e00000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x40e00000;
  FUN_00681a00(&local_28);
  FUN_00682020(0x41000000);
  local_28 = 0x40000000;
  uStack_24 = 0x41500000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x41500000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x41700000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x41700000;
  FUN_00681a00(&local_28);
  local_28 = 0x40000000;
  uStack_24 = 0x41880000;
  uStack_20 = 0x40a00000;
  uStack_1c = 0x41880000;
  FUN_00681a00(&local_28);
  FUN_00682020(0x41000000);
  local_28 = 0x41700000;
  uStack_24 = 0x40e00000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x40e00000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x41100000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x41100000;
  FUN_00681a00(&local_28);
  local_28 = 0x41700000;
  uStack_24 = 0x41300000;
  uStack_20 = 0x41900000;
  uStack_1c = 0x41300000;
  FUN_00681a00(&local_28);
  FUN_00682e50();
  FUN_00682d90();
  FUN_00682d90();
  FUN_00682d90();
  FUN_00682d90();
  local_28 = 0x40e00000;
  uStack_24 = 0x40a00000;
  uStack_20 = 0x41400000;
  uStack_1c = 0x41100000;
  FUN_006814d0(&local_28,0x40000000);
  local_28 = 0x40e00000;
  uStack_24 = 0x41700000;
  uStack_20 = 0x41400000;
  uStack_1c = 0x41300000;
  FUN_006814d0(&local_28,0x40000000);
  FUN_00683720(0x3f800000,1);
  ExceptionList = local_10;
  return;
}

